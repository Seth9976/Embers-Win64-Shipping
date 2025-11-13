// 函数: sub_141d7d4b0
// 地址: 0x141d7d4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140d3c6e0(arg1 + 0x224)
int64_t* rbx = rax

if (rax != 0)
label_141d7d60b:
    uint32_t result
    
    if ((*(*rbx + 0x150))(rbx) == 0)
    label_141d7d640:
        result = *(arg1 + 0x238) | *(arg1 + 0x234) | *(arg1 + 0x230) | *(arg1 + 0x22c)
        
        if (result == 0)
            return sub_141d77130(arg1, arg2)
        
        if (rbx != 0)
            result.b = *(rbx + 0x5c) & 0x60
            
            if (result.b == 0x40)
                return sub_141d77130(arg1, arg2)
    else
        result = sub_1424385d0((*(*rbx + 0x150))(rbx))
        
        if (result.b != 0)
            goto label_141d7d640
    
    return result

int32_t r8_1 = *(arg1 + 0x23c)
int128_t zmm0 = *(arg1 + 0x22c)
int32_t var_38
int64_t var_34

if (r8_1 == 0xffffffff)
    var_38 = 0xffffffff
    var_34 = 0
else
    int128_t var_58 = zmm0
    void var_48
    int128_t* rax_1 = sub_140cba950(&var_58, &var_48, r8_1)
    var_38 = 0xffffffff
    var_34.d = 0
    zmm0 = *rax_1
    var_34:4.d = 0

int128_t var_2c = zmm0
int64_t* rax_2 = sub_140d3c6e0(&var_38)
rbx = rax_2

if (rax_2 != 0)
label_141d7d5c3:
    void* rax_11 = sub_142452380()
    void* rdx_3 = rbx[2]
    int64_t rax_12 = sx.q(*(rax_11 + 0x38))
    
    if (rax_12.d s> *(rdx_3 + 0x38) || *(*(rdx_3 + 0x30) + (rax_12 << 3)) != rax_11 + 0x30)
        rbx = nullptr
else if ((var_2c:0xc.d | var_2c:8.d | var_2c:4.d | var_2c.d) == 0)
    rbx = nullptr
else
    int32_t rax_7 = 0
    
    if (0 == data_1439a9d84)
        data_1439a9d84 = 0
    else
        rax_7 = data_1439a9d84
    
    if (rax_7 != var_34:4.d || var_38 != 0xffffffff)
        void* rax_8 = sub_140ccdeb0(&var_2c)
        sub_140d3a3a0(&var_38, rax_8)
        
        if (rax_8 != 0 || data_143e1d7b4 == rax_8.b)
            int32_t rax_9 = 0
            
            if (0 == data_1439a9d84)
                data_1439a9d84 = 0
            else
                rax_9 = data_1439a9d84
            
            var_34:4.d = rax_9
        
        int64_t* rax_10 = sub_140d3c6e0(&var_38)
        rbx = rax_10
        
        if (rax_10 != 0)
            goto label_141d7d5c3
        
        rbx = nullptr
    else
        rbx = nullptr

sub_140d3a3a0(arg1 + 0x224, rbx)

if (rbx == 0)
    goto label_141d7d640

goto label_141d7d60b
