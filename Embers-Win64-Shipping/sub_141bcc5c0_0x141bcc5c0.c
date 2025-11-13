// 函数: sub_141bcc5c0
// 地址: 0x141bcc5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_398
int64_t rax_1 = __security_cookie ^ &var_398
void*** rax_2 = j_sub_140a82f30(0x788)
void*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    rax_2[1].d = 1
    *(rax_2 + 0xc) = 1
    *rdi = &data_142ee74b8
    
    if (rdi != -0x10)
        sub_140f1d7d0(&rdi[2], 0)

void* var_360 = &rdi[2]
sub_140918950(&var_360, &rdi[2])
int64_t var_378 = 0x778
void var_368
void* var_350 = &var_368
sub_140e23ed0(&rdi[2], "SListView<TSharedPtr<FString>>")
void var_338
int64_t* rax_3
int128_t zmm1
rax_3, zmm1 = sub_140f1e240(&var_338)
char* (* var_348)(void* arg1, char* arg2, int512_t arg3 @ zmm1)
char* (** rax_4)(void* arg1, char* arg2, int512_t arg3 @ zmm1) =
    sub_140f267a0(&var_360, &var_348, rax_3, zmm1)
*arg2 = *rax_4
void* rax_6 = rax_4[1]
arg2[1] = rax_6

if (rax_6 != 0)
    *(rax_6 + 8) += 1

int64_t* var_340

if (var_340 != 0)
    var_340[1].d -= 1
    
    if (var_340[1].d == 1)
        (**var_340)(var_340)
        int32_t temp2_1 = *(var_340 + 0xc)
        *(var_340 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_340 + 8))(var_340, 1)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            void** r8_3 = *rdi
            r8_3[1](rdi, 1, r8_3)

sub_140f24060(&var_338)
__security_check_cookie(rax_1 ^ &var_398)
return arg2
