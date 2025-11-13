// 函数: sub_141ec4aa0
// 地址: 0x141ec4aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = nullptr
uint64_t result = zx.q(*(arg1 + 8) u>> 4)
void* rbx = nullptr

if ((result.b & 1) == 0)
    rbx = *(arg1 + 0x20)

int64_t* rbx_1 = *(rbx + 0x250)

if (rbx_1 != 0)
    int64_t var_18 = 0
    int32_t var_10_1 = 0
    sub_1405947f0(&var_18, 0x12)
    int32_t rax_1 = var_10_1 + 0x12
    var_10_1 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, u"You feel ethereal", 0x24)
    
    if (((*(arg1 + 8) u>> 4).b & 1) == 0)
        rdi = *(arg1 + 0x20)
    
    sub_1425692d0(rdi, &var_18, 0, zx.o(0))
    int64_t rcx_4 = var_18
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    void* rax_4 = sub_1424890f0()
    void* rcx_5 = rbx_1[2]
    result = sx.q(*(rax_4 + 0x38))
    
    if (result.d s<= *(rcx_5 + 0x38))
        uint64_t result_1 = result
        result = *(rcx_5 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_4 + 0x30)
            sub_142489a00(rbx_1, result_1)
            result = (*(*rbx_1 + 0x6b0))(rbx_1)
            
            if (result.b == 0)
                return (*(*rbx_1 + 0x860))(rbx_1)

return result
