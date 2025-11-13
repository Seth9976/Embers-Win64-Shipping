// 函数: sub_1429b5ff0
// 地址: 0x1429b5ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_218 = -2
void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int32_t r12 = arg3
void* var_230 = arg1
int32_t var_248 = 0
int64_t var_240 = 0

if (*(*(arg1 + 8) + 0x1b0) == 0)
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
    sub_14297d3f0(&exceptionObject, "readPixelSampleCounts called with no valid frame buffer")
    _CxxThrowException(&exceptionObject, &data_143946538)
    noreturn

struct _Mtx_internal_imp_t* mtx = *(*(arg1 + 8) + 0x1d8)
struct _Mtx_internal_imp_t* mtx_1 = mtx
char var_220 = 0
int32_t code = _Mtx_lock(mtx)

if (code != 0)
    std::_Throw_C_error(code)
    noreturn

char var_220_1 = 1
int64_t* rcx_2 = *(*(*(arg1 + 8) + 0x1d8) + 0x50)
int64_t rax_7 = (*(*rcx_2 + 0x20))(rcx_2)
int64_t var_240_1 = rax_7
int32_t rsi = r12

if (r12 s>= arg2)
    rsi = arg2

if (r12 s<= arg2)
    r12 = arg2

void* rax_8 = *(arg1 + 8)

if (rsi s< *(rax_8 + 0xc4) || r12 s> *(rax_8 + 0xc8))
    struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject_1
    sub_14297d3f0(&exceptionObject_1, 
        "Tried to read scan line sample counts outside the image file's data window.")
    _CxxThrowException(&exceptionObject_1, &data_143946538)
    noreturn

while (rsi s<= r12)
    void* rcx_3 = *(arg1 + 8)
    int32_t r11_2 = rsi - *(rcx_3 + 0xc4)
    
    if (*(sx.q(r11_2) + *(rcx_3 + 0x198)) == 0)
        int32_t temp0_1 = divs.dp.d(sx.q(r11_2), *(rcx_3 + 0x150))
        sub_1429b6570(*(rcx_3 + 0x1d8), rcx_3, temp0_1)
        void* r9_1 = *(arg1 + 8)
        int32_t rcx_5 = *(r9_1 + 0x150)
        int32_t rbx_4 = rcx_5 * temp0_1 + *(r9_1 + 0xc4)
        int32_t rax_23 = rcx_5 - 1 + rbx_4
        int32_t rdi_3 = *(r9_1 + 0xc8)
        
        if (rdi_3 s>= rax_23)
            rdi_3 = rax_23
        
        sub_1429a3870(r9_1 + 0x50, rbx_4, rdi_3, *(r9_1 + 0x1a0), *(r9_1 + 0x1a8), *(r9_1 + 0x1ac), 
            r9_1 + 0xf0)
        void* r9_3 = *(arg1 + 8)
        int32_t rax_27 = *(r9_3 + 0xc4)
        int32_t var_268_1
        var_268_1.q = r9_3 + 0x108
        sub_1429a64e0(r9_3 + 0xf0, rbx_4 - rax_27, rdi_3 - rax_27, *(r9_3 + 0x150), var_268_1)
    else
        int64_t rdi_1 = *(rcx_3 + 0x1a0)
        int32_t rbx_1 = *(rcx_3 + 0x1a8)
        int32_t i = *(rcx_3 + 0xbc)
        
        if (i s<= *(rcx_3 + 0xc0))
            int64_t r14_1 = sx.q(*(rcx_3 + 0x1ac) * rsi)
            int32_t r10_2 = i * rbx_1
            
            do
                *(sx.q(r10_2) + r14_1 + rdi_1) = *(*(rcx_3 + 0x178)
                    + ((sx.q(*(rcx_3 + 0x174) * r11_2) + sx.q(i - *(rcx_3 + 0xbc))) << 2))
                i += 1
                r10_2 += rbx_1
            while (i s<= *(rcx_3 + 0xc0))
            
            rsi += 1
            continue
    
    rsi += 1

int64_t* rcx_8 = *(*(*(arg1 + 8) + 0x1d8) + 0x50)
(*(*rcx_8 + 0x28))(rcx_8, rax_7)
int32_t code_1 = _Mtx_unlock(mtx)

if (code_1 == 0)
    __security_check_cookie(rax_1 ^ &var_288)
    return code_1

std::_Throw_C_error(code_1)
noreturn
