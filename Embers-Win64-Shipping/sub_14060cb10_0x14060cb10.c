// 函数: sub_14060cb10
// 地址: 0x14060cb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
class std::istream* rsi = arg2
__builtin_memset(&arg1[4], 0, 0x18)
int64_t _Str = 0
int32_t var_48 = 0
int16_t var_44 = 0
std::istream::read(rsi, &_Str, 0xe)
int128_t zmm0 = data_143702ea0
int64_t rdi = -1
char var_90 = 0
int128_t var_80 = zmm0
int64_t r8 = -1

do
    r8 += 1
while (data_142d63620[4][r8] != 0)

sub_14058ad40(&var_90, &data_142d63620[4], r8)
int128_t var_60 = data_143702ea0
char var_70 = 0

do
    rdi += 1
while (*(&_Str + rdi) != 0)

sub_14058ad40(&var_70, &_Str, rdi)
uint32_t rcx_5
uint32_t rdx_3

if (sub_140610db0(&var_70, &var_90, 0, 4) != 0)
    *arg1 = (zx.d(var_48.b) << 8) + zx.d(var_48:1.b)
    rcx_5 = (zx.d(var_44.b) << 8) + zx.d(var_44:1.b)
    rdx_3 = (zx.d(var_48:2.b) << 8) + zx.d(var_48:3.b)
else
    sub_14058b120(std::cerr, "File identifier not MThd. Exiting")
    rcx_5 = 0x1e0
    *arg1 = 0
    rdx_3 = 0

int32_t i = 0
arg1[1] = rdx_3
arg1[2] = rcx_5

if (arg1[1] s> 0)
    int64_t r12_1 = 0x1fffffffffffffff
    
    do
        int32_t* rax_6 = j_sub_140a82f30(0x20)
        int32_t* rbp_1
        
        if (rax_6 == 0)
            rbp_1 = nullptr
        else
            rbp_1 = sub_14060ce20(rax_6, rsi)
        
        int32_t** rdi_1 = *(arg1 + 0x18)
        int64_t rcx_12 = *(arg1 + 0x20)
        
        if (rdi_1 == rcx_12)
            int64_t rax_8 = *(arg1 + 0x10)
            int64_t r14_3 = (rdi_1 - rax_8) s>> 3
            
            if (r14_3 == 0x1fffffffffffffff)
                sub_140610c20()
                noreturn
            
            int64_t rcx_14 = (rcx_12 - rax_8) s>> 3
            uint64_t rdx_8 = rcx_14 u>> 1
            
            if (rcx_14 u<= 0x1fffffffffffffff - rdx_8)
                r12_1 = rdx_8 + rcx_14
                
                if (r12_1 u< r14_3 + 1)
                    r12_1 = r14_3 + 1
            
            void* rax_10 = public: struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
                &arg1[4], r12_1)
            void* rcx_16 = rax_10
            *(rax_10 + (r14_3 << 3)) = rbp_1
            int64_t r8_3 = *(arg1 + 0x18)
            int32_t** rdx_10 = *(arg1 + 0x10)
            uint32_t count
            
            if (rdi_1 != r8_3)
                memmove(rcx_16, rdx_10, rdi_1.d - rdx_10.d)
                count = (*(arg1 + 0x18)).d - rdi_1.d
                rcx_16 = rax_10 + ((r14_3 + 1) << 3)
                rdx_10 = rdi_1
            else
                count = r8_3.d - rdx_10.d
            
            memmove(rcx_16, rdx_10, count)
            void* rcx_18 = *(arg1 + 0x10)
            
            if (rcx_18 != 0)
                if (((*(arg1 + 0x20) - rcx_18) & 0xfffffffffffffff8) u>= 0x1000)
                    void* r8_7 = *(rcx_18 - 8)
                    
                    if (rcx_18 - r8_7 - 8 u> 0x1f)
                        _invalid_parameter_noinfo_noreturn()
                        noreturn
                    
                    rcx_18 = r8_7
                
                j_sub_140a74f90(rcx_18)
            
            *(arg1 + 0x10) = rax_10
            *(arg1 + 0x18) = rax_10 + ((r14_3 + 1) << 3)
            void* rax_14 = rax_10 + (r12_1 << 3)
            rsi = arg2
            r12_1 = 0x1fffffffffffffff
            *(arg1 + 0x20) = rax_14
        else
            *rdi_1 = rbp_1
            *(arg1 + 0x18) += 8
        
        i += 1
    while (i s< arg1[1])

__security_check_cookie(rax_1 ^ &var_b8)
return arg1
