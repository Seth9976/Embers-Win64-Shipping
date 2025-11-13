// 函数: sub_1410500d0
// 地址: 0x1410500d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3
int64_t rdi

if (arg2 != 0)
    rdi = (*(*arg2 + 0x48))(arg2)
else
    rdi = 0

if (rbx != 0)
    rbx = (*(*rbx + 0x48))(rbx)

int32_t rax_5 = int.d(fconvert.t(arg4[3]))
int32_t var_40 = 0
int32_t var_34 = 1
int32_t rbp = (int.q(fconvert.t(*arg5))).d
int32_t r14 = (int.q(fconvert.t(arg5[1]))).d
int32_t rcx_3 = int.d(fconvert.t(*arg4))
int32_t var_44 = int.d(fconvert.t(arg4[1]))
int32_t var_3c = int.d(fconvert.t(arg4[2]))
void*** rcx_8 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_8[9]

if (rax_6 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x50)
    rcx_8 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_8[9]

data_143f02bac += 1
data_143f02bc8 = rax_6
*data_143f02ba0 = rcx_8
data_143f02ba0 = &rcx_8[1]
rcx_8[1] = 0
*(rcx_8 + 0x30) = rcx_3.o
*rcx_8 = &data_142f01b08
rcx_8[2] = rbx
rcx_8[3].d = rbp
*(rcx_8 + 0x1c) = r14
rcx_8[4].d = 0
rcx_8[5] = rdi
rcx_8[8] = rax_5.q
return &data_142f01b08
