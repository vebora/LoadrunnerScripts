Action()
{
	lr_load_dll("GUUID.dll");
	char *s;


	web_url("web_url",
		"URL=http://www.google.com",
		"TargetFrame=",
		"Resource=0",
		"Referer=",
		LAST);

	s=Class1.GenerateGuid(12);
	
	return 0;
}
