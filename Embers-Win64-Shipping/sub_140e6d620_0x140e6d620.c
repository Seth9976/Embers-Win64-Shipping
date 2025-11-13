// 函数: sub_140e6d620
// 地址: 0x140e6d620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int128_t var_88
int32_t var_58
int64_t* result = sub_140e152a0(*sub_140db22a0(arg2, &var_88), &var_58)
int64_t* rbx = result[1]
int64_t* rsi = *result

if (rbx != 0)
    rbx[1].d += 1

int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        result = (**var_50)(var_50)
        int32_t temp2_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*var_50 + 8))(var_50, 1)

int64_t* var_80

if (var_80 != 0)
    var_80[1].d -= 1
    
    if (var_80[1].d == 1)
        result = (**var_80)(var_80)
        int32_t temp3_1 = *(var_80 + 0xc)
        *(var_80 + 0xc) -= 1
        
        if (temp3_1 == 1)
            result = (*(*var_80 + 8))(var_80, 1)

if (rsi != 0)
    result = (*(*rsi + 0xc8))(rsi)
    
    if (result.b != 0)
        void* rax_8 = *(arg2 + 0x128)
        void* rdx_2 = arg2 + 8
        int64_t var_6c_1 = 0
        
        if (rax_8 != 0)
            rdx_2 = rax_8
        
        int64_t rcx_7 = sx.q(*(arg2 + 0x130)) * 9
        float zmm3 = *(rdx_2 + (rcx_7 << 3) - 0x40)
        float zmm2 = zmm3 f* *(rdx_2 + (rcx_7 << 3) - 0x44)
        zmm3 = zmm3 f* *(rdx_2 + (rcx_7 << 3) - 0x48)
        int32_t zmm1 = *(rdx_2 + (rcx_7 << 3) - 0x38)
        float var_64_1 = zmm2
        int32_t var_78 = *(rdx_2 + (rcx_7 << 3) - 0x3c)
        int32_t var_74_1 = zmm1
        float var_70_1 = zmm3
        float zmm6_1 = sub_140dbe170(&var_78, &var_88)
        *(arg1 + 0x260) = var_88
        sub_140d94220(&var_78, arg2)
        sub_140e553b0(arg1 + 0x240, &var_78)
        int64_t* var_60
        
        if (var_60 != 0)
            int32_t temp6_1 = *(var_60 + 0xc)
            *(var_60 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_60 + 8))(var_60, 1)
        
        sub_140d94cb0(&var_78)
        
        if ((*(*rsi + 0xe8))(rsi) != 0 && *(*(*rsi + 0xe0))(rsi) == 5
                && *((*(*rsi + 0xe0))(rsi) + 0x18) == 0)
            zmm6_1 = 1f
        
        int64_t* rcx_16 = *(arg1 + 0x20)
        float zmm1_1 = zmm6_1 f+ var_88.d
        int32_t rax_17 = int.d(zmm1_1 + zmm1_1 + 0.5f)
        zmm1_1 = zmm6_1 f+ var_88:4.d
        var_58 = rax_17 s>> 1
        int32_t var_54_1 = int.d(zmm1_1 + zmm1_1 + 0.5f) s>> 1
        var_50.d = int.d(var_80.d - zmm6_1)
        var_50:4.d = int.d(var_80:4.d - zmm6_1)
        result = (*(*rcx_16 + 0x48))(rcx_16, &var_58)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp5_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp5_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

__security_check_cookie(rax_1 ^ &var_a8)
return result
