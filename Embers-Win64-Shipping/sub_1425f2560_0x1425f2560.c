// 函数: sub_1425f2560
// 地址: 0x1425f2560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int32_t* i = *arg3; i != &i[sx.q(arg3[1].d)]; i = &i[1])
    if (arg2 == *i)
        int64_t rax
        rax.b = 1
        return rax

int32_t rdi = 0
int32_t rsi = 0
int64_t r13 = 0
int64_t var_58 = 0
int32_t r12 = 0
int64_t var_50 = 0
int32_t rax_1

if (arg1 != 0 && *arg1 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg1[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_58, rbx_1.d + 1)
        r12 = var_50:4.d
        rsi = var_50.d
        r13 = var_58
    
    rsi += rbx_1.d + 1
    var_50.d = rsi
    
    if (rsi s> r12)
        sub_140594770(&var_58)
        r12 = var_50:4.d
        rsi = var_50.d
        r13 = var_58
    
    UnDecorator::getReferenceType(r13, arg1, (rbx_1.d + 1) * 2)
    rax_1 = 0

if (arg1 == 0 || *arg1 == 0 || rsi == 0)
    rax_1 = 1

var_58 = r13
int32_t rdx_4 = rsi + 0xa + rax_1
var_50.d = rsi
var_50:4.d = r12

if (rdx_4 s> r12)
    sub_1405947f0(&var_58, rdx_4)

sub_140a20ba0(&var_58, u" must be (", 0xa)
int64_t rbx_3 = var_58
var_58 = 0
int32_t var_50_1 = 0
void var_48

if (arg4 != &var_48)
    int64_t rcx_5 = *arg4
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    *arg4 = rbx_3
    arg4[1].d = var_50.d
    *(arg4 + 0xc) = var_50:4.d
else if (rbx_3 != 0)
    sub_140a74f90(rbx_3)

int64_t rbx_4 = 0
int32_t* rsi_2 = *arg3
uint64_t r15_3 = sx.q(arg3[1].d) << 2 u>> 2

if (rsi_2 u> &rsi_2[arg3[1]])
    r15_3 = 0

if (r15_3 != 0)
    do
        void* const r8_2 = &data_142d8adc4
        *rsi_2
        
        if (arg4[1].d s<= 1)
            r8_2 = &data_142d40450
        
        sub_140a2e390(&var_58, u"%s%u", r8_2)
        int32_t r8_4
        
        if (var_50_1 == 0)
            r8_4 = 0
        else
            r8_4 = var_50_1 - 1
        
        sub_140a20ba0(arg4, var_58, r8_4)
        int64_t rcx_9 = var_58
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        rsi_2 = &rsi_2[1]
        rbx_4 += 1
    while (rbx_4 != r15_3)

sub_140a2e390(&var_58, u"). %u was specified.", zx.q(arg2))

if (var_50_1 != 0)
    rdi = var_50_1 - 1

sub_140a20ba0(arg4, var_58, rdi)
int64_t rcx_12 = var_58

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rax_6
rax_6.b = 0
return rax_6
