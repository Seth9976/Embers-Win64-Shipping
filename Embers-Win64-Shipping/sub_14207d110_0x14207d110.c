// 函数: sub_14207d110
// 地址: 0x14207d110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || arg1[0x44] == 0 || arg1[0x4d].d s<= 0
        || sub_14243ade0((*(*arg1 + 0x150))()).b == 0)
    return 

void* rax = arg1[0x44]
int32_t i = 0

if (*(rax + 0x38) s<= 0)
    return 

int64_t r13_1 = 0

do
    void* rbx_1 = *(*(rax + 0x30) + r13_1)
    
    if (rbx_1 != 0)
        void* rax_4 = sub_1424cd2f0()
        void* rdx = *(rbx_1 + 0x10)
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
            uint64_t r8_2 = zx.q(arg1[0x4d].d)
            int32_t j = 0
            
            if (r8_2.d s> 0)
                void** rax_7 = arg1[0x4c]
                
                do
                    void* rdx_1 = *rax_7
                    
                    if (*(rdx_1 + 0x28) == rbx_1 && *(rdx_1 + 0x30) == arg2)
                        goto label_14207d279
                    
                    j += 1
                    rax_7 = &rax_7[1]
                while (j s< r8_2.d)
            
            if (sub_142099630(arg1, arg2, r8_2) != 0)
                void* rax_9 = sub_142075480(arg1, 0, 8, 0, 0, 0)
                int64_t rbp_1 = sx.q(arg1[0x4d].d)
                int32_t rcx_4 = (rbp_1 + 1).d
                arg1[0x4d].d = rcx_4
                
                if (rcx_4 s> *(arg1 + 0x26c))
                    sub_1405a4d70(&arg1[0x4c])
                
                *(arg1[0x4c] + (rbp_1 << 3)) = rax_9
                (*(*rax_9 + 0x280))(rax_9, rbx_1, arg2)
    
label_14207d279:
    rax = arg1[0x44]
    i += 1
    r13_1 += 8
while (i s< *(rax + 0x38))
