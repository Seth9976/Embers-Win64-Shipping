// 函数: sub_14296afc0
// 地址: 0x14296afc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rax = sub_1406938b0(arg2)
int32_t rax_5
int32_t r9_1

if (rax == 1)
    fputs(sub_14060aa50(arg2), data_143fed130)
    fflush(data_143fed130)
    rax_5 = sub_142890eb0(arg2)
    r9_1 = 1
else
    if (rax == 2)
        int64_t rax_6 = sub_14060aa50(arg2)
        sub_141528310(data_143fed130, "Verifying - %s", rax_6)
        fflush(data_143fed130)
        int32_t result
        int64_t r8_3
        result, r8_3 = sub_14296b2e0(arg1, arg2, sub_142890eb0(arg2) & 1, 1)
        
        if (result s<= 0)
            return result
        
        int64_t rax_9 = sub_14293b190(arg2)
        char* rax_10 = sub_14293b170(arg2)
        void* rbx_2 = rax_9 - rax_10
        uint32_t i
        uint32_t rdx_3
        
        do
            rdx_3 = zx.d(*rax_10)
            i = zx.d(*(rax_10 + rbx_2))
            
            if (rdx_3 != i)
                break
            
            rax_10 = &rax_10[1]
        while (i != 0)
        
        if (rdx_3 - i == 0)
            return 1
        
        sub_141528310(data_143fed130, "Verify failure\n", r8_3)
        fflush(data_143fed130)
        return 0
    
    if (rax != 3)
        return 1
    
    fputs(sub_14060aa50(arg2), data_143fed130)
    fputs(sub_14293b160(arg2), data_143fed130)
    fflush(data_143fed130)
    rax_5 = sub_142890eb0(arg2)
    r9_1 = 0

return sub_14296b2e0(arg1, arg2, rax_5 & 1, r9_1)
