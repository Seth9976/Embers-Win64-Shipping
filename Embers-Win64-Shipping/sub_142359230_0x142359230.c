// 函数: sub_142359230
// 地址: 0x142359230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1
sub_140cd7d40(arg1)
int64_t* rcx = rbx[0x24]

if (rcx != 0 && *(rcx + 0x54) == 0)
    (*(*rcx + 0x20))(rcx)

if (sub_140d23dc0(rbx, 0x30) == 0 && *(rbx + 0x34) != 0xffffffff)
    int64_t* rax_4 = sub_140963350(sub_141f88540())
    int64_t r8_1 = *rax_4
    (*(r8_1 + 0xd0))(rax_4, rbx, r8_1)

int64_t result = sub_1405949a0()

if ((*(rbx + 0x94) & 0x40) == 0)
    return result

jump(*(*rbx + 0x300))
