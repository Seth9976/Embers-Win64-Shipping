// 函数: sub_140591d00
// 地址: 0x140591d00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t** i_1 = arg2
int64_t r10 = sx.q(arg6)
void* var_38

if (r10.d u> 0x3c || not(test_bit(0x1000000042000000, r10)))
    var_38 = arg1 + 0xa0
    char var_30_1 = 0
    int32_t code = _Mtx_lock(arg1 + 0xa0)
    
    if (code == 0)
        char var_30_2 = 1
        int64_t* rax_5 = sub_140593a10(std::wcerr, "Invalid fps for video "")
        wchar16* r8_1 = i_1[2]
        
        if (i_1[3] u>= 8)
            i_1 = *i_1
        
        std::wostream::operator<<(sub_140593a10(sub_1405943c0(rax_5, i_1, r8_1), ""."), 
            sub_140593eb0)
        return _Mtx_unlock(arg1 + 0xa0)
    
    std::_Throw_C_error(code)
    noreturn

int64_t temp0_1 = arg2[3]

if (temp0_1 u>= 8)
    arg2 = *arg2

void* rcx = arg2 + (i_1[2] << 1)
int16_t* i = i_1

if (temp0_1 u>= 8)
    i = *i_1

for (; i != rcx; i = &i[1])
    if (*i == 0x5c)
        *i = 0x2f

var_38 = nullptr
int128_t var_28 = *arg8
int64_t var_18_1 = arg8[1].q
int64_t result = sub_140591af0(arg1, i_1, arg3, arg4, arg5, r10.d, arg7, &var_28, &var_38)
void* rbx = var_38

if (rbx == 0)
    return result

int64_t rdx_1 = *(rbx + 0x20)

if (rdx_1 u>= 8)
    void* rcx_2 = *(rbx + 8)
    
    if ((rdx_1 << 1) + 2 u>= 0x1000)
        void* r8 = *(rcx_2 - 8)
        
        if (rcx_2 - r8 - 8 u> 0x1f)
            _invalid_parameter_noinfo_noreturn()
            noreturn
        
        rcx_2 = r8
    
    j_sub_140a74f90(rcx_2)

*(rbx + 0x18) = 0
*(rbx + 0x20) = 7
*(rbx + 8) = 0
return j_sub_140a74f90(rbx)
