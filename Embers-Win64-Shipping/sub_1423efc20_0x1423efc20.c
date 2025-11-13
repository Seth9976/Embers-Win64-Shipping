// 函数: sub_1423efc20
// 地址: 0x1423efc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
uint64_t arg_8 = rbx
int16_t* const rbp = &data_142d40450
int32_t rsi = 0
int32_t arg_18 = 0
int64_t var_38

if (arg3 == 0)
label_1423efcad:
    rbx.b = 0
else
    rbx = 0
    
    if (*(arg1 + 0xd20) s<= 0)
    label_1423efcad_1:
        rbx.b = 0
    else
        int64_t rdi_1 = 0
        
        while (true)
            int64_t rax_1 = *(arg1 + 0xd18)
            int16_t* rdx
            
            if (arg4[1].d == 0)
                rdx = &data_142d40450
            else
                rdx = *arg4
            
            int16_t* const rcx
            
            if (*(rax_1 + rdi_1 + 0x10) == 0)
                rcx = &data_142d40450
            else
                rcx = *(rax_1 + rdi_1 + 8)
            
            if (sub_140a54510(rcx, rdx) == 0)
                break
            
            rbx = zx.q(rbx.d + 1)
            rdi_1 += 0x60
            
            if (rbx.d s>= *(arg1 + 0xd20))
                goto label_1423efcad_2
        
        int16_t* rdi_2
        
        if (arg4[1].d == 0)
            rdi_2 = &data_142d40450
        else
            rdi_2 = *arg4
        
        var_38 = 0
        int32_t rcx_3 = 0
        int32_t var_2c_1 = 0
        int32_t var_30_1 = 0
        
        if (rdi_2 != 0 && *rdi_2 != 0)
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (rdi_2[rbx_2] != 0)
            
            rbx = zx.q(rbx_2.d + 1)
            
            if (rbx.d s> 0)
                sub_1405947f0(&var_38, rbx.d)
                rcx_3 = var_2c_1
                rsi = var_30_1
            
            int32_t rax_2 = rbx.d + rsi
            int32_t var_30_2 = rax_2
            
            if (rax_2 s> rcx_3)
                sub_140594770(&var_38)
            
            UnDecorator::getReferenceType(var_38, rdi_2, rbx.d * 2)
        
        rsi = 1
        
        if ((*(*arg3 + 0x168))(arg3, &var_38).b == arg5)
        label_1423efcad_2:
            rbx.b = 0
        else
            rbx = 1

if ((rsi.b & 1) != 0)
    int64_t rcx_1 = var_38
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)

if (rbx.b == 0)
    return 

if (arg4[1].d != 0)
    rbp = *arg4

sub_1423dc1a0(arg1, arg2, arg3, rbp)
