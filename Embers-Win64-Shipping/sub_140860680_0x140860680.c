// 函数: sub_140860680
// 地址: 0x140860680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1408623c0(arg1)
sub_1408623c0(arg2)
int32_t r8

if (((*(arg3 + 0x6b8) u>> 2).b & 1) == 0)
    r8 = *(arg3 + 0x10)

if (((*(arg3 + 0x6b8) u>> 2).b & 1) != 0 || r8 == 0xffffffff)
    sub_140858cf0(arg2, arg3)
    sub_140849460(arg1, arg3)
else
    sub_14080f1a0(*(arg1 + 0xd8), *(arg2 + 0xd8), r8, 0)
    sub_140858cf0(arg2, arg3)
    int64_t rdi_1 = sx.q(*(arg1 + 0xcb8))
    int32_t rax_2 = (rdi_1 + 1).d
    *(arg1 + 0xcb8) = rax_2
    
    if (rax_2 s> *(arg1 + 0xcbc))
        sub_1405a4d70(arg1 + 0xcb0)
    
    *(*(arg1 + 0xcb0) + (rdi_1 << 3)) = arg3
    *(arg3 + 0x10) = rdi_1.d
    
    if ((*(arg1 + 0xd68) & 2) == 0)
        sub_140856230(arg1, arg3)

int64_t* rdi_2 = *(arg1 + 0x18)
int64_t rdx_8 = 0

if (rdi_2 != 0)
    int32_t rax_4 = 0
    bool z_1
    
    if (0 == rdi_2[1].d)
        rdi_2[1].d = 0
        z_1 = true
    else
        rax_4 = rdi_2[1].d
        z_1 = false
    
    if (z_1)
    label_140860778:
        rdi_2 = nullptr
    else
        while (true)
            bool z_2
            
            if (rax_4 == rdi_2[1].d)
                rdi_2[1].d = rax_4 + 1
                z_2 = true
            else
                rdi_2[1].d
                z_2 = false
            
            if (z_2)
                if (rdi_2 != 0)
                    rdx_8 = *(arg1 + 0x10)
                
                break
            
            rax_4 = 0
            bool z_3
            
            if (0 == rdi_2[1].d)
                rdi_2[1].d = 0
                z_3 = true
            else
                rax_4 = rdi_2[1].d
                z_3 = false
            
            if (z_3)
                goto label_140860778

int64_t var_18 = rdx_8
int64_t* rcx_8 = rdi_2
int64_t* var_10 = rcx_8

if (rdi_2 != 0)
    rdi_2[1].d += 1
    rcx_8 = var_10

int32_t result = &var_18

if (arg3 + 0x18 != &var_18)
    *(arg3 + 0x18) = rdx_8
    var_18 = 0
    result = sub_1405aeff0(arg3 + 0x20, &var_10)
    rcx_8 = var_10

if (rcx_8 != 0)
    result = rcx_8[1].d
    rcx_8[1].d -= 1
    
    if (result == 1)
        int64_t* rbx_2 = var_10
        (**rbx_2)(rbx_2)
        result = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (result == 1)
            int64_t* rcx_11 = var_10
            result = (*(*rcx_11 + 8))(rcx_11, 1)

if (rdi_2 != 0)
    result = rdi_2[1].d
    rdi_2[1].d -= 1
    
    if (result == 1)
        result = (**rdi_2)(rdi_2)
        int32_t rsi_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            return (*(*rdi_2 + 8))(rdi_2, zx.q(rsi_1))

return result
