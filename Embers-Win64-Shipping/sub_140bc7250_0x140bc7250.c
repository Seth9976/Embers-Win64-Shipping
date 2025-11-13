// 函数: sub_140bc7250
// 地址: 0x140bc7250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = arg1 + 0xd8
EnterCriticalSection(lpCriticalSection)
int64_t* r8 = arg1 + 0xa8
int64_t* r12 = *r8
uint64_t rdi
rdi.b = *(arg1 + 0xb0) != 0
int64_t r13 = 0
uint64_t rcx_2 = sx.q(r8[1].d) << 3 u>> 3

if (r12 u> &r12[r8[1]])
    rcx_2 = 0

if (rcx_2 != 0)
    do
        int64_t rdi_1 = *r12
        int32_t i_4 = -1
        int64_t var_78_1 = rdi_1
        int32_t i_2 = 0xffffffff
        int32_t var_6c_1 = 0xffffffff
        sub_1405b67e0(arg1 + 0x58, *(arg1 + 0x60) - *(arg1 + 0x8c), 0)
        
        if (*(arg1 + 0xa0) != 0)
            int32_t rax_3 = sub_140b5ead0(rdi_1.d) + rdi_1:4.d
            void* r8_1 = arg1 + 0x90
            void* rcx_5 = *(r8_1 + 8)
            
            if (rcx_5 != 0)
                r8_1 = rcx_5
            
            i_4 = *(r8_1 + (((sx.q(*(arg1 + 0xa0)) - 1) & sx.q(rax_3)) << 2))
            int32_t i_5 = i_4
            i_2 = i_4
            
            if (i_4 != 0xffffffff)
                int64_t rdx_6 = *(arg1 + 0x58)
                i_2 = i_4
                int32_t i
                
                do
                    int64_t rcx_7 = sx.q(i_4) << 5
                    i = *(rcx_7 + rdx_6 + 0x18)
                    int32_t i_3 = i
                    
                    if (*(rcx_7 + rdx_6) == rdi_1)
                        break
                    
                    i_2 = i
                    i_4 = i
                while (i != 0xffffffff)
        
        void* var_68_1 = arg1 + 0x58
        int64_t zmm1_1 = i_2.q
        int128_t zmm0_1 = (arg1 + 0x58).o
        
        if (i_4 != 0xffffffff)
            int64_t* r14_1 = zmm0_1.q
            int32_t j = zmm1_1:4.d
            int32_t i_1 = zmm1_1.d
            
            do
                int64_t* r9_1 = data_143e1a820
                int64_t rax_5 = *r14_1
                int64_t rcx_9 = sx.q(i_1) << 5
                (*(*r9_1 + 0x90))(r9_1, *(rcx_9 + rax_5 + 8), zx.q(*(rcx_9 + rax_5 + 0x10)))
                i_1 = j
                
                if (j == 0xffffffff)
                    break
                
                int64_t rdx_8 = *r14_1
                
                do
                    int64_t rax_7 = sx.q(i_1) << 5
                    j = *(rax_7 + rdx_8 + 0x18)
                    
                    if (*(rax_7 + rdx_8) == zmm0_1:8.q)
                        break
                    
                    i_1 = j
                while (j != 0xffffffff)
            while (i_1 != 0xffffffff)
        
        sub_140bce6e0(arg1 + 0x58, rdi_1)
        r12 = &r12[1]
        r13 += 1
    while (r13 != rcx_2)
    
    rdi = zx.q(rdi.b)

r8[1].d = 0

if (*(r8 + 0xc) != 0)
    sub_140638c50(r8, 0)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return zx.q(rdi.b)
