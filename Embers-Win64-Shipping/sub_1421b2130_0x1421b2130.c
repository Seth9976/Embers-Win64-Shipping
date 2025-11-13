// 函数: sub_1421b2130
// 地址: 0x1421b2130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float* rbx_1 = sx.q(arg3) + arg4
int512_t zmm1

if ((*(arg1 + 0x70) & 1) == 0)
    zmm1.o = *(arg4 + 0xc)
else
    zmm1.o = *(arg2 + 0x12c)

float zmm6 = sub_141fe5610(arg1 + 0x78, zmm1, *(arg2 + 0x18), nullptr, arg5)
float _X

if ((*(arg1 + 0x68) & 1) == 0)
    _X = arg7
else
    void* rcx_1 = *(arg2 + 0x18)
    void* rdi_1 = *(rcx_1 + 0xa8)
    
    if (rdi_1 != 0)
    label_1421b21a4:
        
        if (sub_142437e30(rdi_1, 0, 1) == 0)
            _X = arg7
        else
            int64_t* rax_3
            float zmm0
            rax_3, zmm0 = sub_142437e30(rdi_1, 0, 1)
            int64_t rdx = *rax_3
            (*(rdx + 0x638))(rax_3, rdx)
            _X = arg7 / zmm0
    else
        void* rax_1 = sub_141ee69e0(rcx_1)
        rdi_1 = rax_1
        
        if (rax_1 != 0)
            goto label_1421b21a4
        
        _X = arg7

_X = _X + *rbx_1
*rbx_1 = _X
_X = _X * zmm6

if (arg6 != 2)
    truncf(_X)

return _X
