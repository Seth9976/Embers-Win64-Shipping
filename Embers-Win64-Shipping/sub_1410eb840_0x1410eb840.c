// 函数: sub_1410eb840
// 地址: 0x1410eb840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[0x16].d s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        int64_t* rcx = *(rdi_1 + arg1[0x15])
        
        if (rcx != 0)
            (**rcx)(rcx, 1)
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< arg1[0x16].d)

int32_t i_1 = 0

if (arg1[0x18].d s> 0)
    int64_t* rdi_2 = nullptr
    
    do
        int64_t* rcx_1 = *(rdi_2 + arg1[0x17])
        (**rcx_1)(rcx_1, 0)
        i_1 += 1
        rdi_2 = &rdi_2[1]
    while (i_1 s< arg1[0x18].d)

int64_t rcx_2 = arg1[0x22]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[0x13]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0x10]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0xc]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[8]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[5]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int32_t i_3 = arg1[1].d
uint64_t r14 = *arg1

if (i_3 != 0)
    int32_t i_2
    
    do
        void* rbp_1 = *r14
        
        if (rbp_1 != 0)
            int64_t j = 0x66
            int64_t* rdi_3 = rbp_1 + 0x4028
            
            do
                rdi_3 = &rdi_3[-0x14]
                j -= 1
                int64_t rcx_8 = *rdi_3
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
            while (j != 0)
            
            j_sub_140a74f90(rbp_1)
        
        r14 += 8
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_140638c50(arg1, 0)

uint64_t rcx_11 = *arg1

if (rcx_11 == 0)
    return 

return sub_140a74f90(rcx_11) __tailcall
