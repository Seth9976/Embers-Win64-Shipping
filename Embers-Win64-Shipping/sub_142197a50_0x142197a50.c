// 函数: sub_142197a50
// 地址: 0x142197a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ce3290(arg1)
int128_t var_38 = data_143a2ed08

if (sub_140cdd5d0(arg1, &var_38) s< 2)
    *(arg1 + 0x37) |= 1

int32_t rax_1 = arg1[9].d
int32_t i_1 = 0
int32_t rbp = 0

if (rax_1 s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t* rbx_1 = *(rsi_1 + arg1[8])
        
        if (rbx_1 != 0)
            sub_140cd85e0(rbx_1)
            sub_140d3cb50(rbx_1)
            
            if (rbx_1[0xa] == 0 && arg1[4] != 0)
                sub_1425598e0()
        
        rax_1 = arg1[9].d
        rbp += 1
        rsi_1 = &rsi_1[1]
    while (rbp s< rax_1)

int32_t i = 0

if (rax_1 s> 0)
    int64_t* rbx_2 = nullptr
    
    do
        int64_t* rcx_3 = *(rbx_2 + arg1[8])
        
        if (rcx_3 != 0)
            sub_140cd85e0(rcx_3)
        
        i += 1
        rbx_2 = &rbx_2[1]
    while (i s< arg1[9].d)

*(arg1 + 0x37) |= 0x10

if (arg1[9].d s> 0)
    int64_t r13_1 = 0
    
    do
        void* rsi_2 = *(arg1[8] + r13_1)
        
        if (rsi_2 != 0)
            int32_t rbx_3 = *(rsi_2 + 0x40)
            int32_t rbx_4 = rbx_3 - 1
            
            if (rbx_3 - 1 s>= 0)
                int64_t rbp_1 = sx.q(rbx_4) << 3
                int64_t r15_1 = rbp_1
                int64_t r14_2 = sx.q(rbx_4 + 1) << 3
                int32_t temp1_1
                
                do
                    int64_t* rcx_4 = *(rsi_2 + 0x38)
                    
                    if (*(rcx_4 + rbp_1) == 0)
                        int32_t rdx_1 = *(rsi_2 + 0x40)
                        int32_t rax_8 = rdx_1 - rbx_4
                        
                        if (rax_8 != 1)
                            memmove(rcx_4 + r15_1, r14_2 + rcx_4, (rax_8 - 1) << 3)
                            rdx_1 = *(rsi_2 + 0x40)
                        
                        *(rsi_2 + 0x40) = rdx_1 - 1
                        sub_1405c53d0(rsi_2 + 0x38)
                        sub_140d25500(arg1)
                    
                    r14_2 -= 8
                    r15_1 -= 8
                    rbp_1 -= 8
                    temp1_1 = rbx_4
                    rbx_4 -= 1
                while (temp1_1 - 1 s>= 0)
        
        i_1 += 1
        r13_1 += 8
    while (i_1 s< arg1[9].d)

if (arg1[4] != 0)
    sub_1425598e0()

int32_t zmm0_1 = arg1[0xb].d
int32_t zmm1 = (zx.o(0)).d

if (not(zmm0_1 f< zmm1))
    zmm1 = __minss_xmmss_memss(zmm0_1, 0x3f800000)

arg1[0xb].d = zmm1
jump(*(*arg1 + 0x270))
