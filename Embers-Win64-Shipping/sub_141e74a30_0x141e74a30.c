// 函数: sub_141e74a30
// 地址: 0x141e74a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* zmm1 = arg2[1].q
int128_t var_38 = *arg2
int64_t rdi = *(zmm1 + 0x28)
void** var_48
void arg_8

if (rdi s> 0)
    if (*(arg1 + 0x4d0) != *(arg1 + 0x4fc))
        void* r8_1 = *(arg1 + 0x508)
        void* r9_1 = arg1 + 0x500
        
        if (r8_1 != 0)
            r9_1 = r8_1
        
        int32_t i =
            *(r9_1 + ((sx.q((rdi u>> 0x20).d * 0x17 + rdi.d) & (sx.q(*(arg1 + 0x510)) - 1)) << 2))
        
        if (i != 0xffffffff)
            int64_t r8_2 = *(arg1 + 0x4c8)
            
            do
                int64_t i_1 = sx.q(i)
                int64_t rcx_2 = i_1 * 3
                
                if (*(r8_2 + (rcx_2 << 3)) == rdi)
                    if (i != 0xffffffff)
                        void* rcx_3 = r8_2 + i_1 * 0x18
                        
                        if (rcx_3 != 0 && *(rcx_3 + 8) != 0)
                            sub_1407c23d0(arg1 + 0x4c8, rdi)
                    
                    break
                
                i = *(r8_2 + (rcx_2 << 3) + 0x10)
            while (i != 0xffffffff)
    
    sub_1405b3620(arg1 + 0x4c8, &var_48)
    int32_t rax_9 = var_48.d
    int64_t* var_40
    *var_40 = rdi
    var_40[1] = zmm1
    var_40[2].d = 0xffffffff
    sub_14078adb0(arg1 + 0x4c8, &arg_8, (rdi u>> 0x20).d * 0x17 + rdi.d, var_40, rax_9, nullptr)

void* arg_10 = zmm1
var_48 = &arg_10
int128_t* var_40_1 = &var_38
return sub_1418b7d70(arg1 + 0x3f0, &arg_8, &var_48, nullptr)
