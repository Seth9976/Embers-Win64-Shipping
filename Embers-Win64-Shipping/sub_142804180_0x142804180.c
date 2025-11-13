// 函数: sub_142804180
// 地址: 0x142804180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = -1
char const (** rbx)[0xa] = &data_143b7c9b0

if (data_143b7c9b0 != 0)
    do
        if (rbx[1].d == *arg2)
            char const (* rdx)[0xa] = *rbx
            
            if (rdx != 0 && *rdx != 0)
                int64_t r8_1 = -1
                
                do
                    r8_1 += 1
                while ((*rdx)[r8_1] != 0)
                
                (**arg1)(arg1)
        
        rbx = &rbx[2]
    while (*rbx != 0)

(**arg1)(arg1, &data_1434cf410, 1)
char var_88[0x80]
memset(&var_88, 0, 0x80)
int64_t result = physx::shdfnd::snprintf(&var_88, 0x80, "%u")

if (var_88[0] == 0)
    return result

do
    rdi += 1
while (var_88[rdi] != 0)

return (**arg1)(arg1, &var_88, rdi)
