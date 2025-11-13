// 函数: sub_1429cf920
// 地址: 0x1429cf920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_468
int64_t rax_1 = __security_cookie ^ &var_468
int32_t rax_2 = *(arg2 + 0x18)
int32_t i_2 = 0
char var_438[0x400]

if (rax_2 s> 0)
    void* rsi_1 = *(arg2 + 0x20)
    
    if (rsi_1 != 0 && *(arg2 + 0x28) != 0)
        int32_t i = 0
        
        if (rax_2 s> 0)
            int32_t* r15_1 = nullptr
            
            do
                int32_t rax_3 = sub_1429cc860(**(arg1 + 0x28), *rsi_1, *(rsi_1 + 4))
                
                if (rax_3 == 0xffffffff)
                    int32_t var_440_1 = *(rsi_1 + 4)
                    int32_t var_448_1 = *rsi_1
                    _snscanf(&var_438, 0x400, 
                        "Edge %d specified to be sharp does not exist (%d, %d)", zx.q(i))
                    sub_1429cfd30(0xe, &var_438)
                else
                    *(*(**(arg1 + 0x28) + 0xd8) + (sx.q(rax_3) << 2)) = *(r15_1 + *(arg2 + 0x28))
                
                i += 1
                r15_1 = &r15_1[1]
                rsi_1 += 8
            while (i s< *(arg2 + 0x18))

int32_t rax_8 = *(arg2 + 0x30)

if (rax_8 s> 0 && *(arg2 + 0x38) != 0 && *(arg2 + 0x40) != 0)
    int32_t i_1 = 0
    
    if (rax_8 s> 0)
        int32_t* rsi_2 = nullptr
        
        do
            int64_t r9_3 = sx.q(*(rsi_2 + *(arg2 + 0x38)))
            void* rcx_4
            
            if (r9_3.d s>= 0)
                rcx_4 = **(arg1 + 0x28)
            
            if (r9_3.d s< 0 || r9_3.d s>= *(rcx_4 + 8))
                _snscanf(&var_438, 0x400, "Vertex %d specified to be sharp does not exist", r9_3)
                sub_1429cfd30(0xf, &var_438)
            else
                *(*(rcx_4 + 0x198) + (r9_3 << 2)) = *(rsi_2 + *(arg2 + 0x40))
            
            i_1 += 1
            rsi_2 = &rsi_2[1]
        while (i_1 s< *(arg2 + 0x30))

uint64_t result

if (*(arg2 + 0x48) s> 0)
    int64_t r8_5 = 0
    
    do
        r8_5 += 4
        i_2 += 1
        int64_t rdx_4 = sx.q(*(r8_5 + *(arg2 + 0x50) - 4))
        result = *(**(arg1 + 0x28) + 0x60)
        *(rdx_4 + result) |= 1
        *(arg1 + 8) |= 2
    while (i_2 s< *(arg2 + 0x48))

result.b = 1
__security_check_cookie(rax_1 ^ &var_468)
return result
