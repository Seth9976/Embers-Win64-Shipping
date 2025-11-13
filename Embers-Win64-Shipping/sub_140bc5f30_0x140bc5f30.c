// 函数: sub_140bc5f30
// 地址: 0x140bc5f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
int64_t rbp = arg3
int64_t rcx = sx.q(arg2)
void* rbx_2 = rcx * 0x30 + *(arg1 + 0x120)
int64_t* rsi = *(*(arg1 + 0x130) + rcx * 0x10)

if (rsi != 0)
    void* rax_3 = sub_140be01c0()
    void* rdx = rsi[2]
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
        int32_t rdx_1 = *(rbx_2 + 0x18)
        
        if (rdx_1 != 0)
            arg3.b = 1
            int64_t rax_6 = sub_140bc5ea0(arg1, rdx_1)
            int64_t r8 = *rsi
            (*(r8 + 0x2c8))(rsi, rax_6, r8)
            void* rax_7
            rax_7, arg3 = sub_140bdf2e0()
            void* rcx_5 = rsi[2]
            int64_t rax_8 = sx.q(*(rax_7 + 0x38))
            
            if (rax_8.d s<= *(rcx_5 + 0x38) && *(*(rcx_5 + 0x30) + (rax_8 << 3)) == rax_7 + 0x30)
                (*(*rsi + 0x268))(rsi)

arg3.b = 1
void* rax_11 = sub_140bc5ea0(arg1, *(rbx_2 + 0x1c))
sub_140d191e0(rsi, rax_11)
rsi[1].d &= 0xfffffbff
char var_1d8
char* var_1c8 = &var_1d8
var_1d8 = 0
void*** (* var_1d0)() = sub_140884c50
void* r14 = *(sub_140a756e0(&var_1d0, &data_14397f5f0) + 0x48)
int64_t r15 = *(r14 + 0x80)
*(r14 + 0x80) = rsi
*(rbp + 0x90) = rax_11
int64_t result

if (((rsi[1].d u>> 4).b & 1) == 0)
    result = (*(*rsi + 0xa0))(rsi, rbp)
else
    int64_t* rbx_4 = rsi[2]
    void** var_1c0
    (*(*rbx_4 + 0x348))(rbx_4, rsi, *SymBuffer::end(sub_140b4cb20(&var_1c0, rbp), &var_1d0))
    result = sub_140b4cbb0(&var_1c0)

*(rbp + 0x90) = 0
rsi[1].d |= 0x200000
*(r14 + 0x80) = r15
__security_check_cookie(rax_1 ^ &var_1f8)
return result
