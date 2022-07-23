string replaceSpaces(string &str){
	// Write your code here.
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==' ')
        {
            str.replace(i,1,"@40");
        }
    }
    return str;
}
