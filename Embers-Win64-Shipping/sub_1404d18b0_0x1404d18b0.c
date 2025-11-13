// 函数: sub_1404d18b0
// 地址: 0x1404d18b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = sub_140b64e00()
data_143efa8e0 = 0
int32_t rdx = 0
data_143efa8e8 = 0
int32_t rcx = 0
data_143efa8ec = 0
int64_t rbx = -1

if (rax != 0 && *rax != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (rax[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&data_143efa8e0, rdi_1.d + 1)
        rcx = data_143efa8ec
        rdx = data_143efa8e8
    
    int32_t rax_1 = rdx + rdi_1.d + 1
    data_143efa8e8 = rax_1
    
    if (rax_1 s> rcx)
        sub_140594770(&data_143efa8e0)
    
    UnDecorator::getReferenceType(data_143efa8e0, rax, (rdi_1.d + 1) * 2)

int32_t rdx_3 = 0
int32_t rcx_2 = 0
data_143efa8f8 = 0
data_143efa8fc = 0
data_143efa8f0 = 0

if ((*u"Embers")[0] != 0)
    do
        rbx += 1
    while ((*u"Embers")[rbx] != 0)
    
    if (rbx.d + 1 s> 0)
        sub_1405947f0(&data_143efa8f0, rbx.d + 1)
        rcx_2 = data_143efa8fc
        rdx_3 = data_143efa8f8
    
    int32_t rax_2 = rdx_3 + rbx.d + 1
    data_143efa8f8 = rax_2
    
    if (rax_2 s> rcx_2)
        sub_140594770(&data_143efa8f0)
    
    UnDecorator::getReferenceType(data_143efa8f0, u"Embers", (rbx.d + 1) * 2)

data_143efa900 = 0
data_143efa908 = 0
sub_1405947f0(&data_143efa900, 0x1c)
int32_t rax_3 = data_143efa908.d + 0x1c
bool cond:1 = rax_3 s<= data_143efa908:4.d
data_143efa908.d = rax_3

if (not(cond:1))
    sub_140594770(&data_143efa900)

UnDecorator::getReferenceType(data_143efa900, u"BuildPatchServicesLocal.ini", 0x38)
return atexit(sub_142cebf00) __tailcall
