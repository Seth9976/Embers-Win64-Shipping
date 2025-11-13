// 函数: sub_141028e60
// 地址: 0x141028e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i_1 = *arg2
void* r15_2 = &i_1[sx.q(arg2[1].d) * 4]
int64_t* i_2 = i_1

if (i_1 != r15_2)
    do
        int32_t rax = i_2[3].d
        void* rbp_1 = *i_2
        
        if (rax != 0)
            int32_t i = 0
            
            if (rax s> 0)
                int64_t* rdi_1 = nullptr
                
                do
                    sub_1405d16e0((sx.q(i) << 5) + *(rbp_1 + 0x30), *(rdi_1 + i_2[2]))
                    rdi_1 = &rdi_1[4]
                    i += 1
                    *(rdi_1 + *(rbp_1 + 0x30) - 0x18) = *(rdi_1 + i_2[2] - 0x18)
                    *(rdi_1 + *(rbp_1 + 0x30) - 0x10) = *(rdi_1 + i_2[2] - 0x10)
                    *(rdi_1 + *(rbp_1 + 0x30) - 0x14) = *(rdi_1 + i_2[2] - 0x14)
                while (i s< i_2[3].d)
        
        i_2 = &i_2[4]
    while (i_2 != r15_2)

int64_t* i_3 = i_1

if (i_1 != r15_2)
    do
        sub_141036c90(*i_3, arg1)
        i_3 = &i_3[4]
    while (i_3 != r15_2)

void* rbx = *(arg1 + 0x1c8)
int32_t rdx_3 = *(rbx + 0x128)
int64_t* rcx_7 = *(rbx + 0x30)

if (rdx_3 != 0)
    (*(*rcx_7 + 0xd0))(rcx_7, rdx_3, *(rbx + 0x120))
    *(rbx + 0x128) = 0

for (; i_1 != r15_2; i_1 = &i_1[4])
    int32_t j_1 = *(arg1 + 0x130)
    void* r9_1 = *i_1
    
    if (j_1 != 0)
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_forward(j_1)
        int32_t rcx_8 = temp0_1
        int32_t j
        
        do
            *(zx.q(rcx_8) + r9_1 + 0x18) = 1
            int32_t rdx_5 = 1 << rcx_8.b
            rcx_8 = 0x20
            j = not.d(rdx_5) & j_1
            j_1 = j
            
            if (j != 0)
                uint64_t rflags_2
                int32_t temp0_2
                temp0_2, rflags_2 = _bit_scan_forward(j)
                rcx_8 = temp0_2
        while (j != 0)
    
    sub_141014980(r9_1, arg1, i_1[1].d)
