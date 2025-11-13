// 函数: sub_141ea3160
// 地址: 0x141ea3160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_38 = arg1
int32_t i = *(arg1 + 0x230)
int32_t var_28 = 0xffffffff
int16_t var_24 = 0x100
char var_22 = 0
int64_t result = sub_1406328d0(&var_38)
void* rbx = *(arg1 + 0x50)

if (rbx != 0)
    while (i != 0)
        if (rbx != 0 && (*(rbx + 0x40) & 0x20) != 0)
            int16_t* r9_1 = *arg2
            i -= 1
            int64_t r8_1 = sx.q(arg2[1].d)
            int16_t j = *(rbx + 0x48)
            void* rcx_3 = &r9_1[r8_1 * 8]
            uint32_t var_44_1 = zx.d(*(rbx + 0x4a))
            int16_t* rax_2 = r9_1
            int32_t var_40_1 = 0
            char var_3c_1 = 0
            
            if (r9_1 != rcx_3)
                while (*rax_2 != j)
                    rax_2 = &rax_2[8]
                    
                    if (rax_2 == rcx_3)
                        goto label_141ea322d
            
            if (r9_1 == rcx_3 || ((rax_2 - r9_1) s>> 4).d == 0xffffffff)
            label_141ea322d:
                int32_t rax_5 = (r8_1 + 1).d
                arg2[1].d = rax_5
                
                if (rax_5 s> *(arg2 + 0xc))
                    sub_1405a4f90(arg2)
                
                *(*arg2 + r8_1 * 0x10) = j.o
        
        void* rax_7 = *(rbx + 0x20)
        result = sub_1406328d0(&var_38)
        rbx = rax_7
        
        if (rbx == 0)
            break

int64_t* rbx_1 = *(arg1 + 0x40)

if (rbx_1 != 0)
    void* rax_8 = sub_14247bf70()
    void* rcx_6 = rbx_1[2]
    result = sx.q(*(rax_8 + 0x38))
    
    if (result.d s<= *(rcx_6 + 0x38))
        int64_t result_1 = result
        result = *(rcx_6 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_8 + 0x30)
            return (*(*rbx_1 + 0x398))(rbx_1, arg2)

return result
