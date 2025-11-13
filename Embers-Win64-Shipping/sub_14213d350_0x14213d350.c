// 函数: sub_14213d350
// 地址: 0x14213d350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 0x63

if (arg1[1].d s> 0)
    int64_t* rax_1 = *arg1
    wchar16* _String
    
    if (rax_1[1].d == 0)
        _String = &data_142d40450
    else
        _String = *rax_1
    
    i_2 = _wtoi(_String)

int32_t var_38 = 0xffffffff
void* r14 = nullptr
int64_t var_48 = 0
int32_t i_3 = 0
void* result = sub_140d3cc80(sub_14254f510(), &var_48, 1, 0x10, 0)
int32_t i = i_3
int32_t i_1 = var_38 + 1
int64_t rdx_1 = var_48
int32_t var_38_1 = i_1

if (i_1 s< i)
    do
        result = sx.q(i_1)
        
        if (*(rdx_1 + (result << 3)) != 0)
            break
        
        result = zx.q(i_1 + 1)
        var_38_1 = result.d
        i_1 = result.d
    while (result.d s< i)

while (i_1 s>= 0)
    if (i_1 s>= i)
        break
    
    void* rcx_2 = *(rdx_1 + (sx.q(i_1) << 3))
    int32_t rbx_1 = *(rcx_2 + 0x194)
    result = sub_140b5b8a0(*(rcx_2 + 0x190), 0x11a)
    int32_t rcx_3
    rcx_3.b = rbx_1 == 0
    
    if ((rcx_3.b & result.b) != 0)
        int64_t* rcx_5 = *(var_48 + (sx.q(var_38_1) << 3))
        result = (*(*rcx_5 + 0x368))(rcx_5)
        
        if (result.b != 0)
            result = sx.q(var_38_1)
            rdx_1 = var_48
            r14 = *(rdx_1 + (result << 3))
            break
    
    i = i_3
    i_1 = var_38_1 + 1
    rdx_1 = var_48
    var_38_1 = i_1
    
    if (i_1 s< i)
        do
            result = sx.q(i_1)
            
            if (*(rdx_1 + (result << 3)) != 0)
                break
            
            result = zx.q(i_1 + 1)
            var_38_1 = result.d
            i_1 = result.d
        while (result.d s< i)

if (rdx_1 != 0)
    result = sub_140a74f90(rdx_1)

if (r14 != 0)
    int64_t* rsi_1 = nullptr
    int64_t* var_58
    sub_1424373a0(*(r14 + 0x140), &var_58)
    int32_t result_1
    result = zx.q(result_1)
    
    while (result.d s>= 0)
        int64_t* rdx_3 = var_58
        
        if (result.d s>= rdx_3[1].d)
            break
        
        int64_t* rax_8 = sub_140d3c6e0(*rdx_3 + (sx.q(result.d) << 3))
        rsi_1 = rax_8
        
        if (rax_8 != 0)
            result = (*(*rax_8 + 0x698))(rsi_1)
            break
        
        result = zx.q(result_1 + 1)
        result_1 = result.d
    
    if (i_2 s> 0)
        int64_t arg_8 = 0
        
        do
            i_2 -= 1
            void* rax_11 = sub_140cde0b0()
            sub_140d19010(rax_11, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
            int64_t* rax_13 = sub_140d2dfc0(sub_14254cba0(), rax_11, 0, 0, 0, 0, 0, 0, 0)
            (*(*rax_13 + 0x2f8))(rax_13, r14, 3, *(r14 + 0x140) + 0x400, 0xf4240, 0)
            int64_t rdx_6 = *rax_13
            (*(rdx_6 + 0x298))(rax_13, rdx_6)
            sub_14215ed70(r14, rax_13)
            (*(*rax_13 + 0x2c0))(rax_13, rsi_1, rax_13)
            rax_13[0x2b5] = *(*(r14 + 0x148) + 0x18)
            result = sub_142157380(rax_13)
        while (i_2 s> 0)

return result
