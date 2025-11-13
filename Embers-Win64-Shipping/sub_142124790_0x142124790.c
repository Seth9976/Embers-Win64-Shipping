// 函数: sub_142124790
// 地址: 0x142124790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = arg2
void* rsi = arg1
char var_20 = 2
int32_t var_1c = 0xffffffff

if (arg1 != 0)
    void* rax_5
    int64_t rax_6
    void* rdx_2
    
    do
        uint64_t var_18
        sub_140b4c620(&var_18, &var_28)
        int32_t i = 0
        
        if (*(rsi + 0xe8) s> 0)
            int64_t r14_1 = 0
            
            do
                int32_t* result = *(rsi + 0xe0) + r14_1
                void arg_8
                uint64_t rax_4
                
                if (*sub_140b4c620(&arg_8, result) != var_18 || result[3] != var_1c
                        || result[2].b != var_20)
                    rax_4.b = 0
                else
                    rax_4.b = 1
                
                if (rax_4.b != 0)
                    if (result != 0)
                        return result
                    
                    break
                
                i += 1
                r14_1 += 0x24
            while (i s< *(rsi + 0xe8))
        
        rsi = *(rsi + 0xd0)
        
        if (rsi == 0)
            break
        
        rax_5 = sub_142543020()
        rdx_2 = *(rsi + 0x10)
        rax_6 = sx.q(*(rax_5 + 0x38))
        
        if (rax_6.d s> *(rdx_2 + 0x38))
            break
    while (*(*(rdx_2 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)

return nullptr
