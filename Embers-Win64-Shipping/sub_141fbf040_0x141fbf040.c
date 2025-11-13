// 函数: sub_141fbf040
// 地址: 0x141fbf040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == *(arg1 + 0x75c))
    return 

int64_t rbx_1 = data_143f3d558
int64_t r8_1

if (data_143de5480 == 0)
    r8_1 = 0
else
    r8_1.b = GetCurrentThreadId() != data_143de5470

if (*(rbx_1 + (r8_1 << 2)) s> 0)
    int32_t rcx = *(*(arg1 + 0x88) + 0x78)
    int64_t rdi_1 = sx.q(rcx - 1)
    
    if (rcx - 1 s>= 0)
        int64_t temp2_1
        
        do
            void* rbx_2 = *(*(*(arg1 + 0x88) + 0x70) + (rdi_1 << 3))
            
            if (rbx_2 != 0)
                void* rax_4 = sub_142458ee0()
                void* rdx = *(rbx_2 + 0x10)
                int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                
                if (rax_5.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
                    int32_t zmm0_1
                    
                    if (arg2 == 0)
                        zmm0_1 = 0x3f800000
                    else
                        zmm0_1 = (zx.o(0)).d
                    
                    void* rdx_1 = *(rbx_2 + 0x70)
                    *(rbx_2 + 0x7c) = zmm0_1
                    
                    if (rdx_1 != 0)
                        for (int64_t* i = *(arg1 + 0xcf0); i != &i[sx.q(*(arg1 + 0xcf8))]; 
                                i = &i[1])
                            if (*i == rdx_1)
                                goto label_141fbf156
                        
                        *(rdx_1 + 0x98) = zmm0_1
            
        label_141fbf156:
            temp2_1 = rdi_1
            rdi_1 -= 1
        while (temp2_1 - 1 s>= 0)

*(arg1 + 0x75c) = arg2
int64_t rbp
rbp.b = 0
*(arg1 + 0xa04) += 1
int32_t rax_8 = *(arg1 + 0x9f8)
int32_t rcx_4 = *(arg1 + 0xa04)
int64_t rdi_2 = sx.q(rax_8 - 1)

if (rax_8 - 1 s>= 0)
    int64_t rbx_4 = rdi_2 << 4
    int64_t temp3_1
    
    do
        int64_t rcx_5 = *(arg1 + 0x9f0)
        
        if (*(rbx_4 + rcx_5 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_6 = *(rbx_4 + rcx_5)
            
            if (rcx_6 == 0)
                rbp.b = 1
            else if ((*(*rcx_6 + 0x50))(rcx_6, zx.q(arg2)) == 0)
                rbp.b = 1
        
        rbx_4 -= 0x10
        temp3_1 = rdi_2
        rdi_2 -= 1
    while (temp3_1 - 1 s>= 0)
    rcx_4 = *(arg1 + 0xa04)

*(arg1 + 0xa04) = rcx_4 - 1

if (rbp.b != 0)
    sub_140599630(arg1 + 0x9f0, 0)
