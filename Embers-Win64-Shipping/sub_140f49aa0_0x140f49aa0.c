// 函数: sub_140f49aa0
// 地址: 0x140f49aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[2]
int32_t rsi = 0
uint64_t rbp
rbp.b = 0
int64_t r15 = 0

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        int32_t rax_2 = rbx[1].d
        r15 = arg1[1]
        rbx[1].d = rax_2
        
        if (rax_2 == 0)
            (**rbx)(rbx)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx + 8))(rbx, 1)

*(arg2 + 0x50) = r15
int64_t* rcx_2 = *(arg2 + 0x58)

if (rbx != rcx_2)
    if (rbx != 0)
        *(rbx + 0xc) += 1
        rcx_2 = *(arg2 + 0x58)
    
    if (rcx_2 != 0)
        int32_t temp2_1 = *(rcx_2 + 0xc)
        *(rcx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rcx_2 + 8))(rcx_2, 1)
    
    *(arg2 + 0x58) = rbx

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

void** r15_1 = nullptr

do
    if (rsi s>= (*arg1[0x55])(&arg1[0x55]))
        if (rbp.b == 0 && arg1[0x59].b == rbp.b)
            int64_t rsi_1 = sx.q(arg1[0x58].d)
            int32_t rax_16 = (rsi_1 + 1).d
            arg1[0x58].d = rax_16
            
            if (rax_16 s> *(arg1 + 0x2c4))
                sub_140638870(&arg1[0x57])
            
            *(arg1[0x57] + (rsi_1 << 3)) = arg2
            int64_t rax_18 = arg1[0x56]
            
            if (rax_18 != 0 && *(arg2 + 8) != rax_18)
                *(arg2 + 8) = rax_18
                sub_140de7bf0(arg2)
        
        break
    
    if (*(arg2 + 0x70) s< *(*(arg1[0x57] + r15_1) + 0x70))
        if (arg1[0x59].b == 0)
            int32_t rbp_1 = arg1[0x58].d
            arg1[0x58].d = rbp_1 + 1
            
            if (rbp_1 + 1 s> *(arg1 + 0x2c4))
                sub_140638870(&arg1[0x57])
            
            void* rdx_1 = &arg1[0x57][sx.q(rsi)]
            memmove(rdx_1 + 8, rdx_1, (rbp_1 - rsi) << 3)
            *(r15_1 + arg1[0x57]) = arg2
            int64_t rax_15 = arg1[0x56]
            
            if (rax_15 != 0 && *(arg2 + 8) != rax_15)
                *(arg2 + 8) = rax_15
                sub_140de7bf0(arg2)
        
        rbp.b = 1
    
    rsi += 1
    r15_1 = &r15_1[1]
while (rbp.b == 0)

sub_140f4adb0(arg1, arg2, 0)
return arg2
