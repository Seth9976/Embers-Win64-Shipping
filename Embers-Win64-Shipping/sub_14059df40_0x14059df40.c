// 函数: sub_14059df40
// 地址: 0x14059df40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void var_e8
void var_88
sub_140b2f260(&var_88, 0x40400000, sub_140a96170(&var_e8), 1, data_143ddb418)
sub_140b40000(&var_88)
int64_t* var_e0

if (var_e0 != 0)
    var_e0[1].d -= 1
    
    if (var_e0[1].d == 1)
        (**var_e0)(var_e0)
        int32_t rax_5 = *(var_e0 + 0xc)
        *(var_e0 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*var_e0 + 8))(var_e0, 1)

void var_d0
sub_140b389c0(&var_88, 0x3f800000, sub_140a96170(&var_d0))
int64_t* var_c8

if (var_c8 != 0)
    var_c8[1].d -= 1
    
    if (var_c8[1].d == 1)
        (**var_c8)(var_c8)
        int32_t rax_10 = *(var_c8 + 0xc)
        *(var_c8 + 0xc) -= 1
        
        if (rax_10 == 1)
            (*(*var_c8 + 8))(var_c8, 1)

int64_t* rax_12 = sub_140b7c590()
int64_t r8_2 = *rax_12
int64_t rsi

if ((*(r8_2 + 0x18))(rax_12, 5, r8_2) == 0)
    rsi.b = 0
else
    sub_140b7c510()
    int64_t r8_3 = data_143e19eb0
    
    if ((*(r8_3 + 0x18))(&data_143e19eb0, 5, r8_3) == 0)
        rsi.b = 0
    else
        void var_b8
        sub_140b389c0(&var_88, 0x3f800000, sub_140a96170(&var_b8))
        int64_t* var_b0
        
        if (var_b0 != 0)
            var_b0[1].d -= 1
            
            if (var_b0[1].d == 1)
                (**var_b0)(var_b0)
                int32_t rax_18 = *(var_b0 + 0xc)
                *(var_b0 + 0xc) -= 1
                
                if (rax_18 == 1)
                    (*(*var_b0 + 8))(var_b0, 1)
        
        int64_t* rax_20 = sub_140b7c590()
        int64_t r8_5 = *rax_20
        
        if ((*(r8_5 + 0x18))(rax_20, 6, r8_5) == 0)
            rsi.b = 0
        else
            sub_140b7c510()
            int64_t r8_6 = data_143e19eb0
            
            if ((*(r8_6 + 0x18))(&data_143e19eb0, 6, r8_6) == 0)
                rsi.b = 0
            else
                void var_a0
                sub_140b389c0(&var_88, 0x3f800000, sub_140a96170(&var_a0))
                int64_t* var_98
                
                if (var_98 != 0)
                    var_98[1].d -= 1
                    
                    if (var_98[1].d == 1)
                        (**var_98)(var_98)
                        int32_t rax_26 = *(var_98 + 0xc)
                        *(var_98 + 0xc) -= 1
                        
                        if (rax_26 == 1)
                            (*(*var_98 + 8))(var_98, 1)
                
                int64_t* rax_28 = sub_140b7c590()
                int64_t r8_8 = *rax_28
                
                if ((*(r8_8 + 0x18))(rax_28, 7, r8_8) == 0)
                    rsi.b = 0
                else
                    sub_140b7c510()
                    int64_t r8_9 = data_143e19eb0
                    
                    if ((*(r8_9 + 0x18))(&data_143e19eb0, 7, r8_9) == 0)
                        rsi.b = 0
                    else
                        rsi.b = 1

sub_140b365b0(&var_88)
char var_3c = 0
int64_t* var_68

if (var_68 != 0)
    var_68[1].d -= 1
    
    if (var_68[1].d == 1)
        (**var_68)(var_68)
        int32_t rax_34 = *(var_68 + 0xc)
        *(var_68 + 0xc) -= 1
        
        if (rax_34 == 1)
            (*(*var_68 + 8))(var_68, 1)

int64_t* var_80

if (var_80 != 0)
    var_80[1].d -= 1
    
    if (var_80[1].d == 1)
        (**var_80)(var_80)
        int32_t rbx_1 = *(var_80 + 0xc)
        *(var_80 + 0xc) -= 1
        
        if (rbx_1 == 1)
            int64_t r8_11 = *var_80
            (*(r8_11 + 8))(var_80, zx.q(rbx_1), r8_11)

__security_check_cookie(rax_1 ^ &var_118)
return zx.q(rsi.b)
