// 函数: sub_140e7d370
// 地址: 0x140e7d370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_298
int64_t rax_1 = __security_cookie ^ &var_298

if (*(arg1 + 0x2ec) != 0xffffffff)
    sub_140db35c0(sub_140da2c00(), arg1 + 0x2ec)

int64_t* var_260
int128_t zmm0 = sub_140e683e0(arg1, &var_260, *(arg2 + 0xc))
*(var_260 + 0x34) = 2
int64_t* var_258

if (var_258 != 0)
    var_258[1].d -= 1
    
    if (var_258[1].d == 1)
        (**var_258)(var_258)
        int32_t temp2_1 = *(var_258 + 0xc)
        *(var_258 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_258 + 8))(var_258, 1)

(*(*arg1 + 0x50))(arg1)
sub_140e89370(arg1, zmm0)
arg1[0x60] = arg1[0x5f]
int32_t rcx_6 = *(arg2 + 0xc)
int64_t rbp
rbp.b = rcx_6 == 0
int64_t (* var_278)(int64_t* arg1, int64_t* arg2)

if (rcx_6 == 0)
    int64_t* rbx_1 = arg2[9]
    var_278 = arg2[7]
    int64_t var_270_1 = arg2[8]
    int64_t* var_268_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    sub_140e85f50(&arg1[0x24], &var_278)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp7_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

var_260 = arg1
void** var_270_2 = &var_260
int64_t* var_258_1 = arg2
var_278 = sub_140e5a3c0
char result

if (sub_140e79540(&arg1[0xb1], &var_278) == 0)
    void var_250
    sub_140d947e0(&var_250)
    void var_e8
    char result_1 = *sub_140e87e80(arg1, &var_e8, &var_250, arg2)
    sub_140597700(&var_e8)
    
    if (rbp.b != 0)
        *(arg1 + 0x154)
        
        if (arg1[0x25].d == *(arg1 + 0x154))
            int64_t* rcx_14 = data_143e20d18
            var_278.o = zx.o(0)
            (*(*rcx_14 + 0x48))(rcx_14, &var_278)
            
            if (var_270_2 != 0)
                var_270_2[1].d -= 1
                
                if (var_270_2[1].d == 1)
                    (**var_270_2)(var_270_2)
                    int32_t temp10_1 = *(var_270_2 + 0xc)
                    *(var_270_2 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*var_270_2 + 8))(var_270_2, 1)
    
    void var_100
    sub_140596d80(&var_100)
    int64_t* var_108
    
    if (var_108 != 0)
        var_108[1].d -= 1
        
        if (var_108[1].d == 1)
            (**var_108)(var_108)
            int32_t temp8_1 = *(var_108 + 0xc)
            *(var_108 + 0xc) -= 1
            
            if (temp8_1 == 1)
                int64_t r8_3 = *var_108
                (*(r8_3 + 8))(var_108, 1, r8_3)
    
    void var_248
    sub_140d94d20(&var_248)
    result = result_1
else
    result = 1

__security_check_cookie(rax_1 ^ &var_298)
return result
