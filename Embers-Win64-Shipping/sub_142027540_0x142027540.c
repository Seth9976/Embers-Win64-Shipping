// 函数: sub_142027540
// 地址: 0x142027540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* const rsi_1 = arg2
int32_t rbx_1 = arg1[0x57].d
int64_t rbp
rbp.b = 0
int32_t rbx_2 = rbx_1 - 1

if (rbx_1 - 1 s>= 0)
    int64_t rdi_2 = sx.q(rbx_2) << 4
    int32_t temp1_1
    
    do
        int64_t rax_1 = arg1[0x56]
        int64_t* rcx
        
        if (*(rdi_2 + rax_1 + 8) != 0)
            rcx = *(rdi_2 + rax_1)
        
        int64_t rax_3
        
        if (*(rdi_2 + rax_1 + 8) == 0 || rcx == 0)
            rax_3 = 0
        else
            rax_3 = (**rcx)(rcx)
        
        if (rax_3 == rsi_1)
            sub_142039a40(&arg1[0x56], rbx_2, 1, 1)
            rbp.b = 1
        
        rdi_2 -= 0x10
        temp1_1 = rbx_2
        rbx_2 -= 1
    while (temp1_1 - 1 s>= 0)
    
    if (rbp.b != 0)
        (*(*arg1 + 0x6c8))(arg1)

void* rax_5 = sub_14256a090()
void* rdx_1 = *(rsi_1 + 0x10)
int64_t rax_6 = sx.q(*(rax_5 + 0x38))

if (rax_6.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
    rsi_1 = nullptr

int64_t* rdi_3 = sub_141dcc7c0(arg1)

if (rsi_1 == 0)
    return 

int64_t* rax = *(rsi_1 + 0x228)

if (rax == 0 || rdi_3 == 0 || rdi_3[0x6e] != rax)
    return 

int64_t* var_28
sub_1424373a0((*(*arg1 + 0x150))(arg1), &var_28)
int32_t var_20
int32_t rax_10 = var_20

while (true)
    int64_t* rdx_3 = var_28
    int64_t rcx_6
    
    if (rax_10 s< 0 || rax_10 s>= rdx_3[1].d)
        rcx_6.b = 0
    else
        rcx_6.b = 1
    
    if (rcx_6.b == 0)
        break
    
    void* rax_12
    rax_12, rcx_6 = sub_140d3c6e0(*rdx_3 + (sx.q(rax_10) << 3))
    
    if (rax_12 != 0)
        void* rbx_3 = *(rax_12 + 0x228)
        
        if (rbx_3 != 0 && rbx_3 != *(rsi_1 + 0x228))
            uint8_t rax_13
            rax_13, rcx_6 = sub_141dce620(rax_12)
            
            if (rax_13 == 0)
                uint8_t rax_14
                rax_14, rcx_6 = sub_141dce620(rbx_3)
                
                if (rax_14 == 0)
                    (*(*rdi_3 + 0x660))(rdi_3, rbx_3)
                    break
    
    rax_10 = var_20 + 1
    var_20 = rax_10

if (rdi_3[0x6e] == *(rsi_1 + 0x228))
    (*(*rdi_3 + 0x660))(rdi_3, 0)
