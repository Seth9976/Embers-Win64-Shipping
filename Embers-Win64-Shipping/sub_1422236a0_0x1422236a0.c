// 函数: sub_1422236a0
// 地址: 0x1422236a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x4b] != 0 || sub_141dcdc50(arg1).d == 3 || arg1[0x47] == 0)
    return 

int64_t* rax = sub_142497110()

if (rax == 0)
    return 

void* rdx_1 = arg1[0x47]
rax = sx.q(rax[7].d)

if (rax.d s> *(rdx_1 + 0x38) || (*(rdx_1 + 0x30))[rax] != &rax[6] || rdx_1 == 0)
    return 

void var_38
sub_142427eb0(&var_38)
int64_t var_20_1 = Concurrency::details::UMSSchedulerProxy::GetCompletionList(arg1)
char var_10_1 = 1
int64_t rax_2 = sub_141dc9840(arg1)
void* rcx_4 = arg1[0x26]
int32_t var_c
int32_t var_c_1 = var_c | 0x40
int64_t var_18_1 = rax_2
int32_t rax_6
float zmm0_1[0x4]
float zmm1_1[0x4]

if (rcx_4 == 0)
    zmm0_1 = zx.o(data_143dbb208)
    rax_6 = data_143dbb210
else
    zmm1_1 = *(rcx_4 + 0x1c0)
    void* rdi_1 = rcx_4 + 0x180
    uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*rdi_1, zmm1_1, 4))
    float var_48[0x4] = zmm1_1
    
    if (temp0_2 != 0)
        *rdi_1 = zmm1_1
        void var_54
        int32_t* rax_4 = sub_140adf5d0(&var_48, &var_54)
        *(rdi_1 + 0x10) = *rax_4
        *(rdi_1 + 0x18) = rax_4[2]
        rcx_4 = arg1[0x26]
    
    zmm0_1 = zx.o(*(rdi_1 + 0x10))
    rax_6 = *(rdi_1 + 0x18)

int64_t var_6c = zmm0_1.q
int32_t var_64_1 = rax_6
int64_t var_78_1
float var_70_2

if (rcx_4 == 0)
    var_78_1 = data_143dbb1f8.q
    var_70_2 = data_143dbb200
else
    zmm1_1 = *(rcx_4 + 0x1d0)
    var_78_1.d = zmm1_1[0]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
    var_70_2 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xaa)[0]
    var_78_1:4.d = temp0_3[0]

bool cond:1_1 = arg1[0x47] == 0
int64_t var_60 = var_78_1
float var_58_1 = var_70_2
int64_t* rdi_2

if (cond:1_1)
    rdi_2 = nullptr
else
    void* rax_10 = sub_142497110()
    
    if (rax_10 == 0)
        rdi_2 = nullptr
    else
        rdi_2 = arg1[0x47]
        int64_t rax_11 = sx.q(*(rax_10 + 0x38))
        
        if (rax_11.d s> rdi_2[7].d || *(rdi_2[6] + (rax_11 << 3)) != rax_10 + 0x30)
            rdi_2 = nullptr

rax = sub_1420efae0((*(*arg1 + 0x150))(arg1), rdi_2, &var_60, &var_6c, &var_38)

if (rax != 0)
    sub_141f8fd20(rax, arg1)
