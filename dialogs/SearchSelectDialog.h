#ifndef H_SEARCH_SELECT_DIALOG
#define H_SEARCH_SELECT_DIALOG

class SearchSelectDialog : public CDialog
{
public:
   SearchSelectDialog();
   void Update();

protected:
   virtual void OnClose();
   virtual BOOL OnInitDialog();
   virtual INT_PTR DialogProc(UINT uMsg, WPARAM wParam, LPARAM lParam);
   virtual void OnOK();
   virtual void OnCancel();

private:
   bool IsValidString(const char *name);
   void AddSearchItemToList(IEditable * const piedit, int idx);

   void LoadPosition();
   void SavePosition();
   HWND hElementList;
   CCO(PinTable) *curTable;
};

#endif // !H_SEARCH_SELECT_DIALOG