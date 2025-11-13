// 函数: sub_1423bf6c0
// 地址: 0x1423bf6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t var_48 = 0
int32_t var_44 = 0
sub_140b1f640(arg2, &data_142d40450)
wchar16 const* const r8

if (arg6 != 0)
    r8 = u"GROUPED"
else if (arg4 == 0 || arg5 == 0)
    r8 = u"Disabled"
    
    if (arg4 != 0)
        r8 = u"Enabled"
else
    r8 = &data_142dd8278

sub_140b1f700(arg2, ============================ Tick Functions (%s) ============================", 
    r8)

if (arg6 == 0)
    sub_1423bede0(*(arg3 + 0x470), arg2, &var_48, &var_44, arg4, arg5)
    
    if (sub_141abb820(arg3) s> 0)
        int32_t rax_7
        
        do
            void* rax_6 = sub_142436b10(arg3, rbx)
            
            if ((*(rax_6 + 0x1f4) & 0x20) != 0)
                sub_1423bede0(*(rax_6 + 0x138), arg2, &var_48, &var_44, arg4, arg5)
            
            rbx += 1
            rax_7 = sub_141abb820(arg3)
        while (rbx s< rax_7)
    
    sub_140b1f640(arg2, &data_142d40450)
    int32_t rax_8 = var_44
    char var_58_1
    var_58_1.d = rax_8
    sub_140b1f700(arg2, Total registered tick functions: %d, enabled: %d, disabled: %d.", 
        zx.q(rax_8 + var_48))
    return sub_140b1f640(arg2, &data_142d40450)

int64_t rax = *arg1
int64_t var_40 = 0
int32_t var_38_1 = 0
(*(rax + 0x40))(arg1, arg3, &var_40, &var_48, 1, 0)
int64_t rdi_1 = sx.q(var_38_1)
int64_t* r15_1 = nullptr
uint64_t i_3 = zx.q(rdi_1.d)
int32_t i_4 = i_3.d
int64_t* var_28 = nullptr
int32_t var_1c_1 = 0

if (rdi_1.d s> 0)
    sub_14083a7e0(&var_28)
    i_3 = zx.q(i_4)
    r15_1 = var_28

memset(r15_1, 0, rdi_1 * 0xc)
int32_t i_2 = 0
var_28 = &var_40
int64_t* r10_1 = r15_1
var_28.o = var_28.o
int64_t* r9_1 = var_28

for (int32_t i = i_2; i s>= 0; i += 1)
    if (i s>= r9_1[1].d)
        break
    
    int64_t rdx_2 = sx.q(i) * 0xc
    *r10_1 = *(rdx_2 + *r9_1)
    r10_1[1].d = *(rdx_2 + *r9_1 + 8)
    r10_1 += 0xc

arg6 = 0
sub_1423b8ac0(r15_1, i_3.d, 0)

if (i_3.d s> 0)
    void* rdi_2 = &r15_1[1]
    int64_t* rbx_1 = r15_1
    uint64_t i_1
    
    do
        int64_t* rax_4 = sub_140b63b70(rbx_1, &var_28)
        int16_t* const r8_4
        
        if (rax_4[1].d == 0)
            r8_4 = &data_142d40450
        else
            r8_4 = *rax_4
        
        *rdi_2
        sub_140b1f700(arg2, u"%s, %d", r8_4)
        int64_t* rcx_11 = var_28
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        rbx_1 += 0xc
        rdi_2 += 0xc
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

sub_140b1f640(arg2, &data_142d40450)
sub_140b1f700(arg2, u"Total enabled tick functions: %d.", zx.q(var_48))
int64_t result = sub_140b1f640(arg2, &data_142d40450)

if (r15_1 != 0)
    result = sub_140a74f90(r15_1)

int64_t rcx_16 = var_40

if (rcx_16 == 0)
    return result

return sub_140a74f90(rcx_16)
