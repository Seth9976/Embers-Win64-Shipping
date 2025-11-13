// 函数: sub_141d75510
// 地址: 0x141d75510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x42]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x40]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_140596eb0(&arg1[0x37])
arg1[0x35].d = 0
int64_t rcx_3 = arg1[0x34]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_141d78120(&arg1[0x2c], 0)
int64_t rcx_5 = arg1[0x30]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0x2c]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

if (arg1[0x27].b != 0)
    arg1[0x27].b = 0
    int64_t* rdi_1 = arg1[0x25]
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rdi_2 = arg1[0x23]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp2_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t rcx_11 = arg1[0x20]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

int64_t rcx_12 = arg1[0x1e]

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

int64_t rcx_13 = arg1[0x15]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = arg1[0x12]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

int64_t rcx_15 = arg1[0xf]

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t rcx_16 = arg1[0xb]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = arg1[8]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

arg1[5] = &data_143231c88
return sub_140d163b0(arg1) __tailcall
