// 函数: sub_140e7ca70
// 地址: 0x140e7ca70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3f8
int64_t rax_1 = __security_cookie ^ &var_3f8
int64_t (* var_3a8)(int64_t* arg1, int64_t* arg2)
int128_t zmm0 = sub_140e683e0(arg1, &var_3a8, *(arg3 + 0xc))
*(var_3a8 + 0x34) = 2
int64_t* var_3a0

if (var_3a0 != 0)
    var_3a0[1].d -= 1
    
    if (var_3a0[1].d == 1)
        (**var_3a0)(var_3a0)
        int32_t temp1_1 = *(var_3a0 + 0xc)
        *(var_3a0 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_3a0 + 8))(var_3a0, 1)

(*(*arg1 + 0x50))(arg1)
sub_140e89370(arg1, zmm0)
arg1[0x60] = arg1[0x5f]
int64_t* rcx_4 = data_143e20d18
(*(*rcx_4 + 0x48))(rcx_4, arg2)
int64_t* var_3b8

if (*(arg3 + 0xc) == 0)
    int64_t rbx_1 = arg3[7]
    void* r12_1 = arg3[9]
    var_3a8 = arg3[8]
    
    if (r12_1 != 0)
        *(r12_1 + 8) += 1
    
    sub_140a696e0(&arg1[0x24], &var_3b8)
    int64_t (* rax_10)(int64_t* arg1, int64_t* arg2) = var_3a8
    int64_t* var_3b0
    *var_3b0 = rbx_1
    var_3b0[1] = rax_10
    var_3b0[2] = r12_1
    var_3b0[3].d = 0xffffffff
    int64_t rbx_2 = *var_3b0
    sub_140d44150(&arg1[0x24], &var_3a8, (rbx_2 u>> 0x20).d + sub_140b5ead0(rbx_2.d), var_3b0, 
        var_3b8.d, nullptr)

var_3b8 = arg1
int64_t** var_3a0_1 = &var_3b8
var_3a8 = sub_140e5a250
char result

if (sub_140e79540(&arg1[0xb1], &var_3a8) == 0)
    int32_t rbx_4 = arg3[0xa].d
    sub_140e683e0(arg1, &var_3b8, *(arg3 + 0xc))
    char rax_13 = sub_140e6a060(var_3b8, rbx_4)
    
    if (arg3 != 0)
        arg3[1].d -= 1
        
        if (arg3[1].d == 1)
            int64_t rdx_7 = *arg3
            (*rdx_7)(arg3, rdx_7)
            int32_t temp3_1 = *(arg3 + 0xc)
            *(arg3 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*arg3 + 8))(arg3, 1)
    
    if (rax_13 == 0)
        int32_t rbx_6 = *(arg3 + 0xc)
        int64_t rdi_4 = *arg1 + 0xf8
        int64_t* rax_15 = sub_140e67030(arg1, &var_3b8)
        char* var_3d0
        var_3d0.d = rbx_6
        int32_t var_3d8
        var_3d8.b = 0
        void var_268
        (*rdi_4)(arg1, &var_268, arg3[3], rax_15, var_3d8, var_3d0)
        sub_140596d80(&var_3b8)
        arg1[0xb0].d += 1
        int32_t var_274
        int32_t var_274_1 = var_274 & 0xffffff00
        int32_t var_138
        var_3b8.d = var_138 - 1
        void* var_3b0_2 = &var_268
        var_3b8.o = var_3b8.o
        char result_2 = 0
        int64_t var_320_1 = 0
        int64_t var_318_1 = 0
        char var_308_1 = 0
        int64_t var_300
        __builtin_memset(&var_300, 0, 0x88)
        int32_t var_278_1 = 0x20702
        void var_3c8
        var_3d8.q = &var_3c8
        void** var_398
        void var_108
        sub_1405979f0(&result_2, 
            sub_140e4c8d0(&var_108, arg1, &var_3b8, sub_140e51390(&var_398, arg3)))
        sub_140597700(&var_108)
        arg1[0xb0].d -= 1
        char result_1 = result_2
        sub_140597700(&result_2)
        void var_118
        sub_140596d80(&var_118)
        int64_t* var_120
        
        if (var_120 != 0)
            var_120[1].d -= 1
            
            if (var_120[1].d == 1)
                (**var_120)(var_120)
                int32_t temp5_1 = *(var_120 + 0xc)
                *(var_120 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    int64_t r8_7 = *var_120
                    (*(r8_7 + 8))(var_120, 1, r8_7)
        
        void var_260
        sub_140d94d20(&var_260)
        result = result_1
    else
        result = sub_140e7ce00(arg1, arg2, arg3)
else
    result = 1

__security_check_cookie(rax_1 ^ &var_3f8)
return result
