// 函数: sub_142823998
// 地址: 0x142823998
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct YAML::EventHandler::YAML::NodeBuilder::VTable* const result =
    &YAML::NodeBuilder::`vftable'{for `YAML::EventHandler'}
*arg1 = &YAML::NodeBuilder::`vftable'{for `YAML::EventHandler'}
void* rcx = arg1[0xa]

if (rcx != 0)
    result = sub_14058ba50(rcx, (arg1[0xc] - rcx) & 0xfffffffffffffff0)
    __builtin_memset(&arg1[0xa], 0, 0x18)

void* rcx_1 = arg1[7]

if (rcx_1 != 0)
    result = sub_14058ba50(rcx_1, (arg1[9] - rcx_1) & 0xfffffffffffffff8)
    __builtin_memset(&arg1[7], 0, 0x18)

void* rcx_2 = arg1[4]

if (rcx_2 != 0)
    result = sub_14058ba50(rcx_2, (arg1[6] - rcx_2) & 0xfffffffffffffff8)
    __builtin_memset(&arg1[4], 0, 0x18)

int64_t* rbx_1 = arg1[2]

if (rbx_1 != 0)
    int32_t rax = rbx_1[1].d
    rbx_1[1].d -= 1
    result = zx.q(rax - 1)
    
    if (rax == 1)
        (**rbx_1)(rbx_1)
        int32_t rax_2 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        result = zx.q(rax_2 - 1)
        
        if (rax_2 == 1)
            return (*(*rbx_1 + 8))(rbx_1)

return result
