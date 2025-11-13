// 函数: sub_1406b2b60
// 地址: 0x1406b2b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int32_t arg_18 = 0
*arg1 = 0
arg1[1] = 0
int128_t var_90 = zx.o(0)
void* rcx = arg3[1]

if (rcx != 0)
    *(rcx + 8) += 1
    rcx = arg3[1]

var_90.q = *arg3
var_90:8.q = rcx
int64_t var_80 = arg3[2]
int64_t* rdi = arg3[3]

if (rdi != 0)
    rdi[1].d += 1

int64_t* arg_20 = rdi
int64_t* rdx = rdi
int32_t rsi = 2

if (rdi == 0)
    rdx = 2

sub_1406ab7a0(arg1, rdx, &var_90)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (*(*rdi + 8))(rdi)

int128_t var_70
void* var_60
int64_t var_50
int64_t var_40
int64_t* rdx_3

if (arg3[6].b == 0)
    var_50 = (zx.o(0)).q
    var_40 = 0
    void* const __return_addr_1 = __return_addr
    rdx_3 = &__return_addr_1
else
    int64_t var_78 = arg3[7]
    __builtin_memset(&var_70, 0, 0x18)
    int64_t r12_1 = arg3[8]
    int64_t rsi_1 = arg3[9]
    
    if (r12_1 != rsi_1)
        int64_t rsi_2 = rsi_1 - r12_1
        int64_t rdi_2 = rsi_2 s>> 3
        void* rax_5 = public: struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M * __cdecl std::allocator<struct `void * __cdecl phmap::container_internal::Allocate<8, class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>>>(class std::allocator<struct std::pair<unsigned __int64 const, unsigned long>> *, unsigned __int64)'::`2'::M>::allocate(unsigned __int64)(
            &var_70, rdi_2)
        var_70.q = rax_5
        void* rdi_3 = rax_5 + (rdi_2 << 3)
        var_60 = rdi_3
        memmove(rax_5, r12_1, rsi_2.d)
        var_70:8.q = rdi_3
    
    rdx_3 = &var_78
    rsi = 1

arg_18 = rsi
sub_1406934d0(*arg1 + 0x140, rdx_3)

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    arg_18 = rsi
    int64_t rcx_7 = var_50
    
    if (rcx_7 != 0)
        int64_t rax_10 = rcx_7
        
        if ((var_40 - rcx_7) s>> 3 << 3 u>= 0x1000)
            rcx_7 = *(rcx_7 - 8)
            
            if (rax_10 - rcx_7 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_7)

if ((rsi.b & 1) != 0)
    void* rcx_8 = var_70.q
    
    if (rcx_8 != 0)
        void* rax_16 = rcx_8
        
        if ((var_60 - rcx_8) s>> 3 << 3 u>= 0x1000)
            rcx_8 = *(rcx_8 - 8)
            
            if (rax_16 - rcx_8 - 8 u> 0x1f)
                _invalid_parameter_noinfo_noreturn()
                noreturn
        
        j_sub_140a74f90(rcx_8)

*(*arg1 + 0xc) = 0
*(*arg1 + 0xd) = 0
Concurrency::details::_TaskEventLogger::_LogScheduleTask(*arg1 + 0x160)
void* rdi_4 = *arg1
void*** rax_21 = j_sub_140a82f30(0x20)
void*** rdx_7 = rax_21
void*** var_98 = rax_21

if (rax_21 == 0)
    rdx_7 = nullptr
else
    *rdx_7 = &data_142d8e320
    rdx_7[1] = 0
    rdx_7[2] = 0
    void* rax_22 = arg1[1]
    
    if (rax_22 != 0)
        *(rax_22 + 8) += 1
    
    rdx_7[1] = *arg1
    rdx_7[2] = arg1[1]
    *rdx_7 = &data_142d8e330
    rdx_7[3] = arg2

sub_1406c4220(rdi_4, rdx_7, 0)
return arg1
