// 函数: sub_140b735a0
// 地址: 0x140b735a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298

if (arg2 != 0)
    HANDLE hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0)
    
    if (hSnapshot != -1)
        uint32_t rax_2 = GetProcessId(*arg1)
        struct PROCESSENTRY32W lppe
        lppe.dwSize = 0x238
        
        if (Process32FirstW(hSnapshot, &lppe) != 0)
            BOOL i
            
            do
                if (lppe.th32ParentProcessID == rax_2)
                    HANDLE rax_4 = OpenProcess(PROCESS_ALL_ACCESS, 0, lppe.th32ProcessID)
                    
                    if (rax_4 != 0)
                        HANDLE var_278 = rax_4
                        sub_140b735a0(&var_278, zx.q(arg2))
                
                i = Process32NextW(hSnapshot, &lppe)
            while (i != 0)

int64_t result = TerminateProcess(*arg1, 0)
__security_check_cookie(rax_1 ^ &var_298)
return result
