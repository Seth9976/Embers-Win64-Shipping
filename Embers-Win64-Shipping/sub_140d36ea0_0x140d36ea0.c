// 函数: sub_140d36ea0
// 地址: 0x140d36ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
void* entry_rdx
char* rax_2 = *(entry_rdx + 0x20)
*(entry_rdx + 0x38) = 0
*(entry_rdx + 0x30) = 0
uint32_t rcx = zx.d(*rax_2)
*(entry_rdx + 0x20) = &rax_2[1]
int512_t entry_zmm1
(&data_143e1cd60)[zx.q(rcx)](*(entry_rdx + 0x18), entry_zmm1, 0, &data_143e1cd60)
int32_t* rax_5 = *(entry_rdx + 0x20)
void* rdi = *(entry_rdx + 0x30)
int64_t* r12 = *(entry_rdx + 0x38)
int64_t* var_78 = r12
int32_t rbx = *rax_5
*(entry_rdx + 0x20) = &rax_5[1]
int128_t zmm0 = *(rdi + 0x80)
int64_t r15 = *(rdi + 0x78)
int32_t r13 = *(rdi + 0x90)
int64_t var_80 = r15
int128_t var_70 = zmm0
int32_t var_60 = r13
sub_140cfba20(&var_80, rbx)

if (rbx s> 0)
    int64_t* rdi_1 = *(rdi + 0x78)
    int64_t rax_9 =
        sub_140a82f30(sx.q(rdi_1[7].d * *(rdi_1 + 0x3c)), zx.q((*(*rdi_1 + 0x108))(rdi_1)))
    
    if (not(test_bit(zx.q(rdi_1[8].d), 9)))
        (*(*rdi_1 + 0xf0))(rdi_1, rax_9)
    else
        memset(rax_9, 0, sx.q(rdi_1[7].d * *(rdi_1 + 0x3c)))
    
    char* rax_13 = *(entry_rdx + 0x20)
    char i = *rax_13
    
    if (i != 0x3a)
        int64_t var_e8
        int64_t* var_c8_1 = &var_e8
        void* const var_d0 = &data_140d19280
        int64_t var_58
        int64_t* var_b8_1 = &var_58
        int64_t (* var_c0)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm0) = sub_140d19220
        int64_t var_e0
        int64_t* var_a8_1 = &var_e0
        int64_t (* var_b0)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = sub_140cf2f50
        int64_t var_d8
        int64_t* var_98_1 = &var_d8
        int64_t (* var_a0)(int64_t* arg1, int64_t* arg2) = sub_140cf2f40
        
        do
            *(entry_rdx + 0x20) = &rax_13[1]
            (&data_143e1cd60)[zx.q(i)](*(entry_rdx + 0x18), entry_rdx, rax_9)
            var_e8 = r15
            void* const* var_f8_1 = &var_d0
            var_58 = r15
            int64_t (** var_100_1)(int64_t* arg1, int64_t* arg2, int512_t arg3 @ zmm0) = &var_c0
            int64_t var_50_1 = rax_9
            int64_t (** var_108_1)(int64_t* arg1, int64_t* arg2, int64_t* arg3) = &var_b0
            int32_t var_38_1 = r13
            int128_t var_48_1 = zmm0
            var_e0 = r15
            var_d8 = r15
            sub_140d16fd0(r12, rax_9, &var_70, &var_a0, var_108_1, var_100_1)
            rax_13 = *(entry_rdx + 0x20)
            i = *rax_13
        while (i != 0x3a)
    
    if ((not.b((rdi_1[8] u>> 0x24).b) & 1) != 0)
        (*(*rdi_1 + 0xe8))(rdi_1, rax_9)
    
    sub_140a74f90(rax_9)

int64_t result = *(entry_rdx + 0x20)
int64_t r14
r14.b = result != 0
*(entry_rdx + 0x20) = r14 + result
__security_check_cookie(rax_1 ^ &var_128)
return result
