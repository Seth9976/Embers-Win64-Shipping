// 函数: sub_1427e70a0
// 地址: 0x1427e70a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1427e5da0(arg1, "PxArticulationLink")
void* rdx = *arg1

if (*(rdx + 0x10) != 0)
    int64_t rax_1 = *(rdx + 8)
    
    if (*(rax_1 + zx.q(*(rdx + 0x10) - 1) * 0x10 + 8) == 0)
        int64_t* rcx = arg1[1]
        uint64_t r8_6 = zx.q(*(rdx + 0x10) - 1) * 2
        int64_t r9_1 = *rcx
        (*(r9_1 + 0x18))(rcx, *(rax_1 + (r8_6 << 3)), r8_6, r9_1)
        void* rdx_2 = *arg1
        *(*(rdx_2 + 8) + zx.q(*(rdx_2 + 0x10) - 1) * 0x10 + 8) = 1

void* r8_7 = arg1[5]
char arg_8

if (*(r8_7 + 0x3c) != 0)
    int64_t rcx_7 = not.q(arg2 << 0x20) + arg2
    int64_t rcx_8 = rcx_7 ^ rcx_7 u>> 0x16
    int64_t rcx_9 = rcx_8 + not.q(rcx_8 << 0xd)
    int64_t rcx_10 = (rcx_9 u>> 8 ^ rcx_9) * 9
    int64_t rcx_11 = rcx_10 ^ rcx_10 u>> 0xf
    int64_t rcx_12 = rcx_11 + not.q(rcx_11 << 0x1b)
    int32_t i = *(*(r8_7 + 0x20)
        + (((zx.q((rcx_12 u>> 0x1f).d) ^ zx.q(rcx_12.d)) & zx.q(*(r8_7 + 0x2c) - 1)) << 2))
    
    if (i != 0xffffffff)
        int64_t r9_2 = *(r8_7 + 0x10)
        
        do
            if (*(r9_2 + zx.q(i) * 0x10) == arg2)
                if (i != 0xffffffff)
                    uint64_t rdx_10 = zx.q(i) << 4
                    
                    if (rdx_10 != neg.q(r9_2))
                        int64_t* rdi_1 = arg1[3]
                        *(rdx_10 + r9_2 + 8)
                        int64_t* rbx_1 = arg1[1]
                        sub_1427e3b30(rdi_1)
                        int64_t rax_21 = *rdi_1
                        arg_8 = 0
                        (*rax_21)(rdi_1, &arg_8, 1)
                        (*(*rbx_1 + 0x10))(rbx_1, "Parent", rdi_1[4])
                        rdi_1[3] = 0
                
                break
            
            i = *(*(r8_7 + 0x18) + (zx.q(i) << 2))
        while (i != 0xffffffff)

int64_t* rdi_2 = arg1[3]
int64_t* rbx_2 = arg1[1]
sub_1427e3b30(rdi_2)
int64_t rax_23 = *rdi_2
arg_8 = 0
(*rax_23)(rdi_2, &arg_8, 1)
(*(*rbx_2 + 0x10))(rbx_2, &data_1434cf428, rdi_2[4])
rdi_2[3] = 0
void var_308
physx::PxArticulationLinkGeneratedInfo::PxArticulationLinkGeneratedInfo(&var_308)
arg1[3]
arg1[1]
int64_t var_318 = arg1[4]
uint64_t result = sub_1427e1280(*arg1, arg2)
void* rdx_17 = *arg1

if (*(rdx_17 + 0x10) != 0)
    if (*(*(rdx_17 + 8) + zx.q(*(rdx_17 + 0x10) - 1) * 0x10 + 8) != 0)
        int64_t* rcx_26 = arg1[1]
        (*(*rcx_26 + 0x20))(rcx_26, rdx_17)
    
    result = *arg1
    *(result + 0x10) -= 1

return result
