// 函数: sub_140fda4f0
// 地址: 0x140fda4f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ef5d68
arg1[3] = &data_142ef64d0
sub_140fdab10(&arg1[0x2fa2])
sub_1405d1550(&arg1[0x2f9f])
arg1[0x887] = &data_142ef5d28
sub_14198bce0(&arg1[0x887])
sub_140fda110(&arg1[0x887])
sub_140fda030(&arg1[0x885])
sub_140fda030(&arg1[0x883])
sub_140fda030(&arg1[0x881])
sub_140fda030(&arg1[0x87f])
sub_140fda030(&arg1[0x87d])
sub_140fda030(&arg1[0x87b])
int64_t rcx_10 = arg1[0x878]

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

int64_t i = 0x54
void* r14 = &arg1[0x876]

do
    int64_t* rbx_1 = *(r14 - 8)
    r14 -= 8
    i -= 1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            char rax_2
            
            if (rbx_1[2].b == 0 && data_143f0f1d0 == 0)
                rax_2 = sub_1405949a0()
            
            if (rbx_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_2 != 0))
                (**rbx_1)(rbx_1, 1)
            else
                bool z_1
                
                if (0 == *(rbx_1 + 0xc))
                    *(rbx_1 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_1 + 0xc)
                    z_1 = false
                
                if (z_1)
                    sub_1405dcc10(&data_143f02390, rbx_1)
while (i != 0)

int64_t* rcx_12 = arg1[0x4f9]

if (rcx_12 != 0)
    (*(*rcx_12 + 0x10))(rcx_12)

int64_t* rcx_13 = arg1[0x4f8]

if (rcx_13 != 0)
    (*(*rcx_13 + 0x10))(rcx_13)

int64_t i_2 = 8
void* r14_1 = &arg1[0x4ed]

for (int64_t i_1 = 8; i_1 != 0; )
    int64_t* rbx_2 = *(r14_1 - 8)
    r14_1 -= 8
    i_1 -= 1
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            char rax_8
            
            if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                rax_8 = sub_1405949a0()
            
            if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_8 != 0))
                (**rbx_2)(rbx_2, 1)
            else
                bool z_2
                
                if (0 == *(rbx_2 + 0xc))
                    *(rbx_2 + 0xc) = 1
                    z_2 = true
                else
                    *(rbx_2 + 0xc)
                    z_2 = false
                
                if (z_2)
                    sub_1405dcc10(&data_143f02390, rbx_2)

void* rbx_3 = &arg1[0x4e5]

do
    int64_t* rcx_15 = *(rbx_3 - 8)
    rbx_3 -= 8
    i_2 -= 1
    
    if (rcx_15 != 0)
        (*(*rcx_15 + 0x10))(rcx_15)
while (i_2 != 0)

sub_14081c9d0(&arg1[0x4d2])
int64_t rcx_17 = arg1[0x4d0]

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

DeleteCriticalSection(&arg1[0x4cb])
arg1[0x4ca].d = 0
int64_t rcx_19 = arg1[0x4c9]

if (rcx_19 != 0)
    sub_140a74f90(rcx_19)

sub_140fda360(&arg1[0x4c1])
arg1[0x2e] = &data_142ef5be0
int64_t* rcx_21 = arg1[0x2d]

if (rcx_21 != 0)
    (*(*rcx_21 + 0x10))(rcx_21)

j_sub_140a74f90(arg1[0x2c])
int64_t* rcx_23 = arg1[0x2a]

if (rcx_23 != 0)
    (*(*rcx_23 + 0x10))(rcx_23)

int64_t* rcx_24 = arg1[0x28]

if (rcx_24 != 0)
    (*(*rcx_24 + 0x10))(rcx_24)

arg1[3] = &data_142ef2bd8
sub_1405d1550(&arg1[0x25])
*arg1 = &data_142ef2ed0
int64_t rcx_26 = arg1[1]

if (rcx_26 == 0)
    return &data_142ef2ed0

return sub_140a74f90(rcx_26)
