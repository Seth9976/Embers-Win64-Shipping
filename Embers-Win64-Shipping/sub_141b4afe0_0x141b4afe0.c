// 函数: sub_141b4afe0
// 地址: 0x141b4afe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14306c580
int64_t rcx = arg1[0x66]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0x5c]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t i_2 = 3
void* r14 = &arg1[0x4f]
int64_t i

for (i = 3; i != 0; )
    int32_t j_1 = *(r14 - 8)
    r14 -= 0x10
    void* rcx_2 = *r14
    i -= 1
    
    if (j_1 != 0)
        int64_t* rdi_1 = rcx_2 + 8
        int32_t j
        
        do
            int64_t* rbx_1 = *rdi_1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rdi_1 = &rdi_1[2]
            j = j_1
            j_1 -= 1
        while (j != 1)
        rcx_2 = *r14
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)

int64_t* rbx_2 = arg1[0x48]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp5_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q((i + 1).d))

int64_t* rbx_3 = arg1[0x46]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp6_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t rbx_4 = arg1[0x44]

if (rbx_4 != 0)
    j_sub_140a74f90(rbx_4)

void* rbx_5 = &arg1[0x43]
int64_t i_1

do
    rbx_5 -= 0x40
    sub_140ddfd20(rbx_5)
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
sub_1405ae080(&arg1[0x17])
return sub_140ddfe80(arg1) __tailcall
