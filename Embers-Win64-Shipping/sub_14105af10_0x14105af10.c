// 函数: sub_14105af10
// 地址: 0x14105af10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x38)

if (rcx != 0)
    agsDeInit(rcx)
    *(arg1 + 0x38) = 0

sub_141980250()
int64_t* rdi = *(arg1 + 0x20)
uint64_t rsi = sx.q(*(arg1 + 0x28))
void* rbp_2 = &rdi[rsi * 2]

if (rdi != rbp_2)
    do
        void* rcx_2 = *rdi
        int64_t* rbx_1 = *(rcx_2 + 0x18)
        
        if (rbx_1 != 0)
            (*(*rbx_1 + 8))(rbx_1)
            rcx_2 = *rdi
        
        sub_141016770(rcx_2)
        
        if (sub_1410493a0() != 0)
            int64_t rax_3 = *rbx_1
            int64_t* arg_8 = nullptr
            
            if ((*rax_3)(rbx_1, &data_142f01858, &arg_8) s>= 0)
                int64_t* rcx_4 = arg_8
                (*(*rcx_4 + 0x28))(rcx_4, 2)
            
            int64_t* rcx_5 = arg_8
            
            if (rcx_5 != 0)
                (*(*rcx_5 + 0x10))(rcx_5)
        
        if (rbx_1 != 0)
            (*(*rbx_1 + 0x10))(rbx_1)
        
        rdi = &rdi[2]
    while (rdi != rbp_2)
    
    rsi = zx.q(*(arg1 + 0x28))

if (rsi.d != 0)
    int64_t* rdi_2 = *(arg1 + 0x20) + 8
    int32_t i
    
    do
        int64_t* rbx_2 = *rdi_2
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp2_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        rdi_2 = &rdi_2[2]
        i = rsi.d
        rsi = zx.q(rsi.d - 1)
    while (i != 1)

*(arg1 + 0x28) = 0

if (*(arg1 + 0x2c) != 0)
    sub_1405a5410(arg1 + 0x20, 0)

int64_t result = sub_140a74f90(*(arg1 + 0x48))
*(arg1 + 0x48) = 0
*(arg1 + 0x50) = 0
return result
