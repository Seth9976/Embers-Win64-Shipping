// 函数: sub_140fdd6f0
// 地址: 0x140fdd6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1

if (data_143f0f19c == 0)
    return 

data_143f0f19c = 0
char arg_10 = 0
sub_1419a2e50()
data_143f10908 += 1
int32_t i = 0

if (data_143f1afd0 s> 0)
    int64_t* rbx_1 = nullptr
    
    do
        int64_t* rcx_1 = *(rbx_1 + data_143f1afc8)
        
        if (rcx_1 != 0)
            (*(*rcx_1 + 0x20))(rcx_1)
        
        i += 1
        rbx_1 = &rbx_1[1]
    while (i s< data_143f1afd0)

data_143f10908 -= 1
char arg_18 = 0
sub_1419a2e50()
data_143f10908 += 1
int32_t i_1 = 0

if (data_143f1afd0 s> 0)
    int64_t* rbx_2 = nullptr
    
    do
        int64_t* rcx_3 = *(rbx_2 + data_143f1afc8)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x10))(rcx_3)
        
        i_1 += 1
        rbx_2 = &rbx_2[1]
    while (i_1 s< data_143f1afd0)

data_143f10908 -= 1
sub_140fe5900()
int64_t* rdi_1 = arg1 + 0x4110
int64_t i_8 = 6
int64_t i_2

do
    int64_t j_4 = 0xe
    int64_t j
    
    do
        int64_t* rbx_3 = *rdi_1
        *rdi_1 = 0
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                char rax_4
                
                if (rbx_3[2].b == 0 && data_143f0f1d0 == 0)
                    rax_4 = sub_1405949a0()
                
                if (rbx_3[2].b != 0 || (data_143f0f1d0 == 0 && rax_4 != 0))
                    (**rbx_3)(rbx_3, 1)
                else
                    bool z_1
                    
                    if (0 == *(rbx_3 + 0xc))
                        *(rbx_3 + 0xc) = 1
                        z_1 = true
                    else
                        *(rbx_3 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        sub_1405dcc10(&data_143f02390, rbx_3)
        
        rdi_1 = &rdi_1[1]
        j = j_4
        j_4 -= 1
    while (j != 1)
    i_2 = i_8
    i_8 -= 1
while (i_2 != 1)
(*(*(arg1 + 0x170) + 8))(arg1 + 0x170, 0)
sub_1419712f0(0)

for (void* i_3 = &data_143e2bad0; i_3 s< &data_143e2bbe0; i_3 += 0x10)
    int64_t* rbx_4 = *i_3
    int32_t j_5 = *(i_3 + 8)
    
    if (j_5 != 0)
        int32_t j_1
        
        do
            COMRefPtr<class IDebugSSubSection>::Release(rbx_4)
            rbx_4 = &rbx_4[2]
            j_1 = j_5
            j_5 -= 1
        while (j_1 != 1)
    
    *(i_3 + 8) = 0
    
    if (*(i_3 + 0xc) != 0)
        sub_1405a5410(i_3, 0)

for (void* i_4 = &data_143e2bbe0; i_4 s< &data_143e2bf10; )
    int64_t j_6 = 0x11
    int64_t j_2
    
    do
        int64_t* rbx_5 = *i_4
        int32_t k_2 = *(i_4 + 8)
        
        if (k_2 != 0)
            int32_t k
            
            do
                COMRefPtr<class IDebugSSubSection>::Release(rbx_5)
                rbx_5 = &rbx_5[2]
                k = k_2
                k_2 -= 1
            while (k != 1)
        
        *(i_4 + 8) = 0
        
        if (*(i_4 + 0xc) != 0)
            sub_1405a5410(i_4, 0)
        
        i_4 += 0x10
        j_2 = j_6
        j_6 -= 1
    while (j_2 != 1)

for (void* i_5 = &data_143e2b9b0; i_5 s< &data_143e2bad0; )
    int64_t j_7 = 3
    int64_t j_3
    
    do
        int64_t* rbx_6 = *i_5
        int32_t k_3 = *(i_5 + 8)
        
        if (k_3 != 0)
            int32_t k_1
            
            do
                COMRefPtr<class IDebugSSubSection>::Release(rbx_6)
                rbx_6 = &rbx_6[1]
                k_1 = k_3
                k_3 -= 1
            while (k_1 != 1)
        
        *(i_5 + 8) = 0
        
        if (*(i_5 + 0xc) != 0)
            sub_1405c5570(i_5, 0)
        
        i_5 += 0x10
        j_3 = j_7
        j_7 -= 1
    while (j_3 != 1)

sub_140fe76a0()
void* rbx_7 = data_143e2c0d8
int32_t i_7 = data_143e2c0e0.d

if (i_7 != 0)
    int32_t i_6
    
    do
        sub_140fdabb0(rbx_7)
        rbx_7 += 0x18
        i_6 = i_7
        i_7 -= 1
    while (i_6 != 1)

data_143e2c0e0.d = 0

if (data_143e2c0e0:4.d != 0)
    sub_1405a5130(&data_143e2c0d8, 0)

if (*(arg1 + 0x26a0) != 0)
    int64_t* rcx_13 = *(arg1 + 0x150)
    (*(*rcx_13 + 0x10))(rcx_13)
    agsDriverExtensionsDX11_DestroyDevice(*(arg1 + 0x26a0), *(arg1 + 0x168), nullptr, 
        *(arg1 + 0x150), nullptr)
    agsDeInit(*(arg1 + 0x26a0))
    data_143f0f1b4 = 0
    *(arg1 + 0x26a0) = 0

if (data_143e2b8c0 != 0 && *(arg1 + 0x17f30) != 0)
    void* rcx_16 = *(arg1 + 0x160)
    
    if (rcx_16 != 0)
        sub_1427c8600(rcx_16 + 0x10)
        sub_1427c7710(*(arg1 + 0x160))
        data_143e2b8c0 = 0
        int64_t rcx_19 = *(arg1 + 0x160)
        *(arg1 + 0x160) = 0
        j_sub_140a74f90(rcx_19)

sub_140af2b60()

if (sub_140b21a10(&data_143dbb3f0, u"d3ddebug") != 0)
label_140fdda78:
    int64_t* rcx_20 = *(arg1 + 0x150)
    (*(*rcx_20 + 0x370))(rcx_20)
    int64_t* rcx_21 = *(arg1 + 0x150)
    (*(*rcx_21 + 0x378))(rcx_21)
    int64_t* rcx_22 = *(arg1 + 0x168)
    int64_t* var_68
    (**rcx_22)(rcx_22, &data_142ef42b0, &var_68)
    int64_t* rcx_23 = var_68
    
    if (rcx_23 != 0)
        (*(*rcx_23 + 0x50))(rcx_23, 2)
else
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"d3debug") != 0)
        goto label_140fdda78
    
    sub_140af2b60()
    
    if (sub_140b21a10(&data_143dbb3f0, u"dxdebug") != 0)
        goto label_140fdda78

int64_t* rcx_24 = *(arg1 + 0x150)
*(arg1 + 0x150) = 0

if (rcx_24 != 0)
    (*(*rcx_24 + 0x10))(rcx_24)

int64_t* rcx_25 = *(arg1 + 0x168)
*(arg1 + 0x168) = 0

if (rcx_25 != 0)
    (*(*rcx_25 + 0x10))(rcx_25)
