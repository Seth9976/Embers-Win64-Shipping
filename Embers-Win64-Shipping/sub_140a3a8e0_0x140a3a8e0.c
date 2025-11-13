// 函数: sub_140a3a8e0
// 地址: 0x140a3a8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg2
int64_t rbx
rbx.b = 0
uint64_t var_38 = 0
int32_t var_2c = 0
int32_t rdx = 0
int32_t var_30 = 0
char* r14 = arg1

if (i_1 == 0)
    return 

int32_t i

do
    char rcx = *r14
    r14 = &r14[1]
    
    if (rcx s< 0)
        int64_t var_28
        sub_140a2e390(&var_28, u"[0x%X]", zx.q(sx.d(rcx)))
        int32_t var_20
        int32_t r8_3
        
        if (var_20 == 0)
            r8_3 = 0
        else
            r8_3 = var_20 - 1
        
        sub_140a20ba0(&var_38, var_28, r8_3)
        int64_t rcx_3 = var_28
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        rbx.b = 1
        rdx = var_30
    else if (sx.d(rcx) - 0xa u<= 3)
        if (rbx.b != 0)
            sub_140a360c0(&var_38)
        
        rdx = 0
        rbx.b = 0
        var_30 = 0
        
        if (var_2c != 0)
            sub_1405947f0(&var_38, 0)
            rdx = var_30
    else if (rcx != 0)
        int32_t rdi_1 = rdx - 1
        
        if (rdx s<= 0)
            rdi_1 = 0
        
        int32_t rax_2
        rax_2.b = rdx s<= 0
        int32_t rax_4 = rax_2 + 1 + rdx
        var_30 = rax_4
        
        if (rax_4 s> var_2c)
            sub_140594770(&var_38)
        
        int64_t rcx_7 = sx.q(rdi_1)
        *(var_38 + (rcx_7 << 1)) = sx.w(rcx)
        *(var_38 + (rcx_7 << 1) + 2) = 0
        rdx = var_30
    
    i = i_1
    i_1 -= 1
while (i != 1)

if (rbx.b != 0)
    sub_140a360c0(&var_38)

uint64_t rcx_9 = var_38

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)
