// 函数: sub_141d30df0
// 地址: 0x141d30df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t (* rdi)() = arg1[1]
void* rbx = *arg1
int128_t zmm6 = arg1[2].d
int64_t* result = sub_141d3c450(rbx, rdi)

if (*(rdi + 0x80) != 0)
    int32_t rax_5 = *(rdi + 0x428) + *(rdi + 0x418) + *(rdi + 0x408) + *(rdi + 0x3f8)
        + *(rdi + 0x3e8) + *(rdi + 0x438)
    result = zx.q(rax_5 + *(rdi + 0x448))
    
    if (rax_5 != neg.d(*(rdi + 0x448)))
        sub_141d34610(rdi, zmm6.d)
        int64_t r9_1 = AcquireSRWLockShared(rbx + 8)
        int32_t rcx_3 = *(rdi + 0x3e8)
        char arg_8
        char* var_30_1 = &arg_8
        arg_8 = 0
        int64_t (* var_38)()
        int64_t* var_20_1 = &var_38
        var_38 = rdi
        int64_t (* var_28)() = sub_140594850
        int64_t r9_2 = sub_1417487a0(rcx_3, &var_28, 0, r9_1)
        int32_t rcx_4 = *(rdi + 0x3f8)
        char* var_20_2 = &arg_8
        var_28 = rdi
        int64_t (** var_30_2)() = &var_28
        var_38 = sub_140594850
        int64_t r9_3 = sub_1417487a0(rcx_4, &var_38, 0, r9_2)
        int32_t rcx_5 = *(rdi + 0x408)
        char* var_20_3 = &arg_8
        var_28 = rdi
        int64_t (** var_30_3)() = &var_28
        var_38 = sub_141d35bd0
        int64_t r9_4 = sub_1417487a0(rcx_5, &var_38, 0, r9_3)
        int32_t rcx_6 = *(rdi + 0x418)
        char* var_20_4 = &arg_8
        var_28 = rdi
        int64_t (** var_30_4)() = &var_28
        var_38 = sub_141d35a30
        int64_t r9_5 = sub_1417487a0(rcx_6, &var_38, 0, r9_4)
        int32_t rcx_7 = *(rdi + 0x428)
        char* var_20_5 = &arg_8
        var_28 = rdi
        int64_t (** var_30_5)() = &var_28
        var_38 = sub_141d35a40
        int64_t r9_6 = sub_1417487a0(rcx_7, &var_38, 0, r9_5)
        int32_t rcx_8 = *(rdi + 0x438)
        char* var_20_6 = &arg_8
        var_28 = rdi
        void** var_30_6 = &var_28
        var_38 = sub_141d35b50
        int64_t r9_7 = sub_1417487a0(rcx_8, &var_38, 0, r9_6)
        var_28 = rdi
        char* var_20_7 = &arg_8
        void** var_30_7 = &var_28
        var_38 = sub_140594850
        sub_1417487a0(*(rdi + 0x448), &var_38, 0, r9_7)
        ReleaseSRWLockShared(rbx + 8)
        AcquireSRWLockExclusive(rbx + 8)
        sub_141d2c0c0(rdi)
        return ReleaseSRWLockExclusive(rbx + 8)

return result
