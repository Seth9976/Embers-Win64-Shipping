// 函数: sub_140b6fdb0
// 地址: 0x140b6fdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18 = nullptr
int32_t var_10 = 0
PWSTR rcx

if (arg1[1].d == 0)
    rcx = &data_142d40450
else
    rcx = *arg1

char result = sub_140b71db0(rcx, &var_18)
int64_t rdi = sx.q(var_10)
int64_t* rbp = var_18

if (result != 0)
    int64_t* rbx_1 = rbp
    void* rsi_3 = &rbp[rdi * 2]
    
    if (rbp != rsi_3)
        do
            PWSTR lpModuleName
            
            if (rbx_1[1].d == 0)
                lpModuleName = &data_142d40450
            else
                lpModuleName = *rbx_1
            
            result = GetModuleHandleW(lpModuleName)
            rbx_1 = &rbx_1[2]
        while (rbx_1 != rsi_3)

int64_t* rbx_2 = rbp

if (rdi.d != 0)
    int32_t i
    
    do
        int64_t rcx_1 = *rbx_2
        
        if (rcx_1 != 0)
            result = sub_140a74f90(rcx_1)
        
        rbx_2 = &rbx_2[2]
        i = rdi.d
        rdi = zx.q(rdi.d - 1)
    while (i != 1)

if (rbp == 0)
    return result

return sub_140a74f90(rbp) __tailcall
