// 函数: sub_140e86990
// 地址: 0x140e86990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
int64_t* i = arg1[0x57]
void* rdi_2 = &i[sx.q(arg1[0x58].d) * 2]
int64_t* var_248 = arg1

for (; i != rdi_2; i = &i[2])
    void* rdx_1 = *i
    
    if (rdx_1 != 0 && *(rdx_1 + 0x20) != 0)
        j_sub_140e55a10(&var_248, rdx_1)

char var_238 = 1
int64_t var_230 = 0
int64_t var_228 = 0
char var_218 = 0
int64_t var_210
__builtin_memset(&var_210, 0, 0x88)
int32_t var_184
int32_t var_184_1 = (var_184 & 0xffffff10) | 0x10
int32_t var_188 = 0x20702
void var_178
MRECmpImpl::FPushFile(arg1, sub_140d947e0(&var_178), &var_238, nullptr, nullptr, 0)
void var_28
sub_140596d80(&var_28)
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

void var_170
sub_140d94d20(&var_170)
int64_t result = sub_140597700(&var_238)
__security_check_cookie(rax_1 ^ &var_278)
return result
