// 函数: sub_1426e5f80
// 地址: 0x1426e5f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]
void* var_28 = *arg2

if (rbx != 0)
    rbx[1].d += 1

if (&var_28 != arg1 + 0x38)
    var_28.o = *(arg1 + 0x38)
    *(arg1 + 0x38) = var_28.o

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

void* rax_3 = *arg2
var_28 = arg1
*(arg1 + 0x58) = *(rax_3 + 0x10)
*(arg1 + 0x60) = *(*arg2 + 0x2c)
int64_t* var_20
var_20.b = (*(*arg2 + 0x28)).b
sub_1405a9f90(arg1 + 0x68, &var_28)
void* result = arg1 + 0x48

if (result != &var_28)
    *result = 0
    int64_t* rbx_1 = *(result + 8)
    
    if (rbx_1 != 0)
        *(result + 8) = 0
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            result = (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                result = (*(*rbx_1 + 8))(rbx_1, 1)

void* rbx_2 = *(arg1 + 0x20)

if (rbx_2 != 0)
    void* rax_8 = sub_14273a910()
    void* rdx_1 = *(rbx_2 + 0x10)
    result = sx.q(*(rax_8 + 0x38))
    
    if (result.d s<= *(rdx_1 + 0x38))
        void* result_1 = result
        result = *(rdx_1 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_8 + 0x30)
            int64_t* r9_1 = *(rbx_2 + 0xc8)
            int64_t r10_1 = sx.q(*(rbx_2 + 0xd0))
            int64_t* rcx_9 = r9_1
            void* rdx_2 = &r9_1[r10_1]
            
            if (r9_1 != rdx_2)
                do
                    if (*rcx_9 == arg1)
                        int32_t rcx_11 = ((rcx_9 - r9_1) s>> 3).d
                        
                        if (rcx_11 != 0xffffffff)
                            result = zx.q(r10_1.d - rcx_11 - 1)
                            
                            if (result.d s>= 1)
                                result = 1
                            
                            if (result.d != 0)
                                result = memcpy(&r9_1[sx.q(rcx_11)], 
                                    &r9_1[sx.q(r10_1.d - result.d)], result.d << 3)
                            
                            *(rbx_2 + 0xd0) -= 1
                        
                        break
                    
                    rcx_9 = &rcx_9[1]
                while (rcx_9 != rdx_2)

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp5_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp5_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
