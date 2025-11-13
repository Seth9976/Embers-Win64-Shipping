// 函数: sub_1426b7ab0
// 地址: 0x1426b7ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_60 = arg2
int32_t i_4 = -1
int32_t var_5c = 0xffffffff
int32_t i_3 = 0xffffffff
sub_1426ac380(arg1 + 0xf8, *(arg1 + 0x100) - *(arg1 + 0x12c), 0)
int64_t rax = sx.q(*(arg1 + 0x140))

if (rax.d != 0)
    void* rcx_1 = *(arg1 + 0x138)
    void* r8_1 = arg1 + 0x130
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    i_4 = *(r8_1 + (((rax - 1) & zx.q(arg2)) << 2))
    i_3 = i_4
    int32_t i_5 = i_4
    
    if (i_4 != 0xffffffff)
        int64_t rdx_4 = *(arg1 + 0xf8)
        int32_t i_6 = i_4
        int32_t i
        
        do
            int64_t rax_3 = sx.q(i_4) << 5
            i = *(rax_3 + rdx_4 + 0x18)
            i_3 = i
            
            if (*(rax_3 + rdx_4) == arg2)
                break
            
            int32_t i_2 = i
            i_4 = i
        while (i != 0xffffffff)

uint128_t zmm1 = (arg1 + 0xf8).o
int64_t* var_50 = arg1 + 0xf8
int128_t zmm0 = i_3.o
uint64_t rax_5 = _mm_bsrli_si128(zmm1, 8).q u>> 0x20

if (rax_5.d != 0xffffffff)
    if ((*(arg1 + 0x1a8) & 1) != 0)
        char* rdx_5 = *(arg1 + 0x198)
        int64_t r8_2 = sx.q(*(arg1 + 0x1a0))
        char* rax_6 = rdx_5
        void* rcx_2 = &rdx_5[r8_2]
        
        if (rdx_5 != rcx_2)
            while (*rax_6 != arg2)
                rax_6 = &rax_6[1]
                
                if (rax_6 == rcx_2)
                    goto label_1426b7bc1
            
            rax_5 = zx.q(rax_6.d - rdx_5.d)
        
        if (rdx_5 == rcx_2 || rax_5.d == 0xffffffff)
        label_1426b7bc1:
            int32_t rax_7 = (r8_2 + 1).d
            *(arg1 + 0x1a0) = rax_7
            
            if (rax_7 s> *(arg1 + 0x1a4))
                sub_1405daba0(arg1 + 0x198)
            
            int64_t rax_8 = *(arg1 + 0x198)
            *(r8_2 + rax_8) = arg2
            return rax_8
    else if (i_4 != 0xffffffff)
        int32_t j = zmm0.d
        int32_t i_1 = zmm1:0xc.d
        int64_t* r15_1 = zmm1.q
        
        do
            void* rsi_3 = (sx.q(i_1) << 5) + *r15_1
            
            if (*(rsi_3 + 0x10) == 0)
                rax_5 = sub_1426bc430(zmm0:8.q, i_1)
            else
                int64_t* rcx_4 = *(rsi_3 + 8)
                
                if (rcx_4 == 0)
                    rax_5 = sub_1426bc430(zmm0:8.q, i_1)
                else if ((*(*rcx_4 + 0x28))(rcx_4) == 0)
                    rax_5 = sub_1426bc430(zmm0:8.q, i_1)
                else
                    int64_t* rcx_5
                    
                    if (*(rsi_3 + 0x10) == 0)
                        rcx_5 = nullptr
                    else
                        rcx_5 = *(rsi_3 + 8)
                    
                    rax_5 = (*(*rcx_5 + 0x48))(rcx_5, arg1, zx.q(arg2))
                    
                    if (rax_5.b != 1)
                        rax_5 = sub_1426bc430(zmm0:8.q, i_1)
            
            i_1 = j
            
            if (j == 0xffffffff)
                break
            
            int64_t rcx_7 = *r15_1
            
            do
                rax_5 = sx.q(i_1) << 5
                j = *(rax_5 + rcx_7 + 0x18)
                
                if (*(rax_5 + rcx_7) == zmm1:8.b)
                    break
                
                i_1 = j
            while (j != 0xffffffff)
        while (i_1 != 0xffffffff)

return rax_5
