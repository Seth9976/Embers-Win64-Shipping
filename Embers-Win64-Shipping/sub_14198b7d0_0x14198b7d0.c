// 函数: sub_14198b7d0
// 地址: 0x14198b7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = data_1439c82f8

if (i_2 == 0)
    return 

int32_t rdx_1 = 0
void* rdi_1 = &data_1439c82d0

if (i_2 s> 0)
    int64_t r8_1 = 0
    
    do
        void* rcx_1 = data_1439c82f0
        void* rax_1 = &data_1439c82d0
        
        if (rcx_1 != 0)
            rax_1 = rcx_1
        
        void* rcx_2 = *(rax_1 + r8_1)
        int64_t rax_2 = 0
        
        if (0 == *(rcx_2 + 8))
            *(rcx_2 + 8) = 0
        else
            rax_2 = *(rcx_2 + 8)
        
        if (((rax_2 u>> 0x1a).b & 1) == 0)
            int32_t rbx = data_14399e5e0
            int64_t* rax_4 = sub_140a242a0()
            int64_t r9_1 = *rax_4
            (*(r9_1 + 0x48))(rax_4, &data_1439c82d0, zx.q(rbx), r9_1)
            i_2 = data_1439c82f8
            break
        
        i_2 = data_1439c82f8
        rdx_1 += 1
        r8_1 += 8
    while (rdx_1 s< i_2)

int32_t rcx_6 = data_1439c82fc
void* rax = data_1439c82f0

if (rcx_6 s>= 0)
    if (rax != 0)
        rdi_1 = rax
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t* rcx_4 = *rdi_1
            
            if (rcx_4 != 0)
                rcx_4[9].d -= 1
                
                if (rcx_4[9].d == 1)
                    sub_140a2f6e0(rcx_4)
            
            rdi_1 += 8
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    data_1439c82f8 = 0
    return 

void* rsi_1 = &data_1439c82d0

if (rax != 0)
    rsi_1 = rax

if (i_2 != 0)
    int32_t i_1
    
    do
        int64_t* rcx_5 = *rsi_1
        
        if (rcx_5 != 0)
            rcx_5[9].d -= 1
            
            if (rcx_5[9].d == 1)
                sub_140a2f6e0(rcx_5)
        
        rsi_1 += 8
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rcx_6 = data_1439c82fc

data_1439c82f8 = 0

if (rcx_6 != 0)
    sub_14085a940(&data_1439c82d0, 0)
