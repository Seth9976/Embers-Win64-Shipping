// 函数: sub_1425f6270
// 地址: 0x1425f6270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = data_143f70c60

if (rbx == 0)
    return 

int32_t rdi_1 = data_143f70ce8
sub_140b34200("HighlightRecorder_Pause", rdi_1)
bool z_1

if (0 == *(rbx + 8))
    *(rbx + 8) = 0
    z_1 = true
else
    *(rbx + 8)
    z_1 = false

if (not(z_1) && *(rbx + 0x70) == 0)
    void arg_10
    *(rbx + 0x70) = *sub_1425f5580(rbx, &arg_10)
    *(rbx + 8)
    *(rbx + 8) = 2

sub_140b38680("HighlightRecorder_Pause", rdi_1)
